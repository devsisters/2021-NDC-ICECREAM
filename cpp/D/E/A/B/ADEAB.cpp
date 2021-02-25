#include "ADEAB.h"
#include "A/ADEABA.h"
#include "B/ADEABB.h"
#include "C/ADEABC.h"
#include "D/ADEABD.h"
#include "E/ADEABE.h"

namespace ADEAB {

std::string run() {
  std::string out("ADEAB");
  out += std::string(SEPARATOR);
  out += ADEABA::run();
  out += std::string(SEPARATOR);
  out += ADEABB::run();
  out += std::string(SEPARATOR);
  out += ADEABC::run();
  out += std::string(SEPARATOR);
  out += ADEABD::run();
  out += std::string(SEPARATOR);
  out += ADEABE::run();
  return out;
}

}