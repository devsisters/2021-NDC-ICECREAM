#include "ABEAB.h"
#include "A/ABEABA.h"
#include "B/ABEABB.h"
#include "C/ABEABC.h"
#include "D/ABEABD.h"
#include "E/ABEABE.h"

namespace ABEAB {

std::string run() {
  std::string out("ABEAB");
  out += std::string(SEPARATOR);
  out += ABEABA::run();
  out += std::string(SEPARATOR);
  out += ABEABB::run();
  out += std::string(SEPARATOR);
  out += ABEABC::run();
  out += std::string(SEPARATOR);
  out += ABEABD::run();
  out += std::string(SEPARATOR);
  out += ABEABE::run();
  return out;
}

}