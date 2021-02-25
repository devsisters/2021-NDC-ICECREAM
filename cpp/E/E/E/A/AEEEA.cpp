#include "AEEEA.h"
#include "A/AEEEAA.h"
#include "B/AEEEAB.h"
#include "C/AEEEAC.h"
#include "D/AEEEAD.h"
#include "E/AEEEAE.h"

namespace AEEEA {

std::string run() {
  std::string out("AEEEA");
  out += std::string(SEPARATOR);
  out += AEEEAA::run();
  out += std::string(SEPARATOR);
  out += AEEEAB::run();
  out += std::string(SEPARATOR);
  out += AEEEAC::run();
  out += std::string(SEPARATOR);
  out += AEEEAD::run();
  out += std::string(SEPARATOR);
  out += AEEEAE::run();
  return out;
}

}