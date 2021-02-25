#include "AEBBA.h"
#include "A/AEBBAA.h"
#include "B/AEBBAB.h"
#include "C/AEBBAC.h"
#include "D/AEBBAD.h"
#include "E/AEBBAE.h"

namespace AEBBA {

std::string run() {
  std::string out("AEBBA");
  out += std::string(SEPARATOR);
  out += AEBBAA::run();
  out += std::string(SEPARATOR);
  out += AEBBAB::run();
  out += std::string(SEPARATOR);
  out += AEBBAC::run();
  out += std::string(SEPARATOR);
  out += AEBBAD::run();
  out += std::string(SEPARATOR);
  out += AEBBAE::run();
  return out;
}

}