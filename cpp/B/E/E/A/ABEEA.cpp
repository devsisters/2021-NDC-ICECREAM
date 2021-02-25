#include "ABEEA.h"
#include "A/ABEEAA.h"
#include "B/ABEEAB.h"
#include "C/ABEEAC.h"
#include "D/ABEEAD.h"
#include "E/ABEEAE.h"

namespace ABEEA {

std::string run() {
  std::string out("ABEEA");
  out += std::string(SEPARATOR);
  out += ABEEAA::run();
  out += std::string(SEPARATOR);
  out += ABEEAB::run();
  out += std::string(SEPARATOR);
  out += ABEEAC::run();
  out += std::string(SEPARATOR);
  out += ABEEAD::run();
  out += std::string(SEPARATOR);
  out += ABEEAE::run();
  return out;
}

}