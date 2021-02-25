#include "AABBA.h"
#include "A/AABBAA.h"
#include "B/AABBAB.h"
#include "C/AABBAC.h"
#include "D/AABBAD.h"
#include "E/AABBAE.h"

namespace AABBA {

std::string run() {
  std::string out("AABBA");
  out += std::string(SEPARATOR);
  out += AABBAA::run();
  out += std::string(SEPARATOR);
  out += AABBAB::run();
  out += std::string(SEPARATOR);
  out += AABBAC::run();
  out += std::string(SEPARATOR);
  out += AABBAD::run();
  out += std::string(SEPARATOR);
  out += AABBAE::run();
  return out;
}

}