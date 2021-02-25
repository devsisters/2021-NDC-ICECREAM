#include "AEBAA.h"
#include "A/AEBAAA.h"
#include "B/AEBAAB.h"
#include "C/AEBAAC.h"
#include "D/AEBAAD.h"
#include "E/AEBAAE.h"

namespace AEBAA {

std::string run() {
  std::string out("AEBAA");
  out += std::string(SEPARATOR);
  out += AEBAAA::run();
  out += std::string(SEPARATOR);
  out += AEBAAB::run();
  out += std::string(SEPARATOR);
  out += AEBAAC::run();
  out += std::string(SEPARATOR);
  out += AEBAAD::run();
  out += std::string(SEPARATOR);
  out += AEBAAE::run();
  return out;
}

}