#include "ADEEA.h"
#include "A/ADEEAA.h"
#include "B/ADEEAB.h"
#include "C/ADEEAC.h"
#include "D/ADEEAD.h"
#include "E/ADEEAE.h"

namespace ADEEA {

std::string run() {
  std::string out("ADEEA");
  out += std::string(SEPARATOR);
  out += ADEEAA::run();
  out += std::string(SEPARATOR);
  out += ADEEAB::run();
  out += std::string(SEPARATOR);
  out += ADEEAC::run();
  out += std::string(SEPARATOR);
  out += ADEEAD::run();
  out += std::string(SEPARATOR);
  out += ADEEAE::run();
  return out;
}

}