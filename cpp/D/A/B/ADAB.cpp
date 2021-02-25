#include "ADAB.h"
#include "A/ADABA.h"
#include "B/ADABB.h"
#include "C/ADABC.h"
#include "D/ADABD.h"
#include "E/ADABE.h"

namespace ADAB {

std::string run() {
  std::string out("ADAB");
  out += std::string(SEPARATOR);
  out += ADABA::run();
  out += std::string(SEPARATOR);
  out += ADABB::run();
  out += std::string(SEPARATOR);
  out += ADABC::run();
  out += std::string(SEPARATOR);
  out += ADABD::run();
  out += std::string(SEPARATOR);
  out += ADABE::run();
  return out;
}

}