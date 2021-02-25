#include "AECBA.h"
#include "A/AECBAA.h"
#include "B/AECBAB.h"
#include "C/AECBAC.h"
#include "D/AECBAD.h"
#include "E/AECBAE.h"

namespace AECBA {

std::string run() {
  std::string out("AECBA");
  out += std::string(SEPARATOR);
  out += AECBAA::run();
  out += std::string(SEPARATOR);
  out += AECBAB::run();
  out += std::string(SEPARATOR);
  out += AECBAC::run();
  out += std::string(SEPARATOR);
  out += AECBAD::run();
  out += std::string(SEPARATOR);
  out += AECBAE::run();
  return out;
}

}