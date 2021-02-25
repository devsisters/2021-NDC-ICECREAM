#include "ADEA.h"
#include "A/ADEAA.h"
#include "B/ADEAB.h"
#include "C/ADEAC.h"
#include "D/ADEAD.h"
#include "E/ADEAE.h"

namespace ADEA {

std::string run() {
  std::string out("ADEA");
  out += std::string(SEPARATOR);
  out += ADEAA::run();
  out += std::string(SEPARATOR);
  out += ADEAB::run();
  out += std::string(SEPARATOR);
  out += ADEAC::run();
  out += std::string(SEPARATOR);
  out += ADEAD::run();
  out += std::string(SEPARATOR);
  out += ADEAE::run();
  return out;
}

}