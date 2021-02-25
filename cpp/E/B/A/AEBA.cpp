#include "AEBA.h"
#include "A/AEBAA.h"
#include "B/AEBAB.h"
#include "C/AEBAC.h"
#include "D/AEBAD.h"
#include "E/AEBAE.h"

namespace AEBA {

std::string run() {
  std::string out("AEBA");
  out += std::string(SEPARATOR);
  out += AEBAA::run();
  out += std::string(SEPARATOR);
  out += AEBAB::run();
  out += std::string(SEPARATOR);
  out += AEBAC::run();
  out += std::string(SEPARATOR);
  out += AEBAD::run();
  out += std::string(SEPARATOR);
  out += AEBAE::run();
  return out;
}

}