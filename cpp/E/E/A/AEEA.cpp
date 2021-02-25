#include "AEEA.h"
#include "A/AEEAA.h"
#include "B/AEEAB.h"
#include "C/AEEAC.h"
#include "D/AEEAD.h"
#include "E/AEEAE.h"

namespace AEEA {

std::string run() {
  std::string out("AEEA");
  out += std::string(SEPARATOR);
  out += AEEAA::run();
  out += std::string(SEPARATOR);
  out += AEEAB::run();
  out += std::string(SEPARATOR);
  out += AEEAC::run();
  out += std::string(SEPARATOR);
  out += AEEAD::run();
  out += std::string(SEPARATOR);
  out += AEEAE::run();
  return out;
}

}