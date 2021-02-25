#include "AACBA.h"
#include "A/AACBAA.h"
#include "B/AACBAB.h"
#include "C/AACBAC.h"
#include "D/AACBAD.h"
#include "E/AACBAE.h"

namespace AACBA {

std::string run() {
  std::string out("AACBA");
  out += std::string(SEPARATOR);
  out += AACBAA::run();
  out += std::string(SEPARATOR);
  out += AACBAB::run();
  out += std::string(SEPARATOR);
  out += AACBAC::run();
  out += std::string(SEPARATOR);
  out += AACBAD::run();
  out += std::string(SEPARATOR);
  out += AACBAE::run();
  return out;
}

}