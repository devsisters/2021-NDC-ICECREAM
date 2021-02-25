#include "AEBCA.h"
#include "A/AEBCAA.h"
#include "B/AEBCAB.h"
#include "C/AEBCAC.h"
#include "D/AEBCAD.h"
#include "E/AEBCAE.h"

namespace AEBCA {

std::string run() {
  std::string out("AEBCA");
  out += std::string(SEPARATOR);
  out += AEBCAA::run();
  out += std::string(SEPARATOR);
  out += AEBCAB::run();
  out += std::string(SEPARATOR);
  out += AEBCAC::run();
  out += std::string(SEPARATOR);
  out += AEBCAD::run();
  out += std::string(SEPARATOR);
  out += AEBCAE::run();
  return out;
}

}