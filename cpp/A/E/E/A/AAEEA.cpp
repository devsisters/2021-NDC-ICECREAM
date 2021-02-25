#include "AAEEA.h"
#include "A/AAEEAA.h"
#include "B/AAEEAB.h"
#include "C/AAEEAC.h"
#include "D/AAEEAD.h"
#include "E/AAEEAE.h"

namespace AAEEA {

std::string run() {
  std::string out("AAEEA");
  out += std::string(SEPARATOR);
  out += AAEEAA::run();
  out += std::string(SEPARATOR);
  out += AAEEAB::run();
  out += std::string(SEPARATOR);
  out += AAEEAC::run();
  out += std::string(SEPARATOR);
  out += AAEEAD::run();
  out += std::string(SEPARATOR);
  out += AAEEAE::run();
  return out;
}

}