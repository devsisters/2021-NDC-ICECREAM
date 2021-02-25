import os

def gen(name='A', vary=('A', 'B', 'C', 'D', 'E'), depth=5):
    with open(f'{name}.cpp', 'w') as f:
        contents = []
        contents.append(f'#include "{name}.h"')
        for v in vary:
            contents.append(f'#include "{v}/{name + v}.h"')
        contents.append(f'')
        contents.append(f'namespace {name} {{')
        contents.append(f'')
        contents.append(f'std::string run() {{')
        contents.append(f'  std::string out("{name}");')
        for v in vary:
            contents.append(f'  out += std::string(SEPARATOR);')
            contents.append(f'  out += {name + v}::run();')
        contents.append(f'  return out;')
        contents.append(f'}}')
        contents.append(f'')
        contents.append(f'}}')
        f.write('\n'.join(contents))
        
    with open(f'{name}.h', 'w') as f:
        contents = []
        contents.append(f'#ifndef {name}_H')
        contents.append(f'namespace {name} {{')
        contents.append(f'')
        contents.append(f'  std::string run();')
        contents.append(f'')
        contents.append(f'}}')
        contents.append(f'#endif')
        f.write('\n'.join(contents))

    for v in vary:
        try:
            os.makedirs(v)
        except:
            pass
        os.chdir(v)
        if depth - 1 == 0:
            gen(name + v, (), 0)
        else:
            gen(name + v, vary, depth-1)
        os.chdir('..')

gen()
