#include "ABCBA.h"
#include "A/ABCBAA.h"
#include "B/ABCBAB.h"
#include "C/ABCBAC.h"
#include "D/ABCBAD.h"
#include "E/ABCBAE.h"

namespace ABCBA {

std::string run() {
  std::string out("ABCBA");
  out += std::string(SEPARATOR);
  out += ABCBAA::run();
  out += std::string(SEPARATOR);
  out += ABCBAB::run();
  out += std::string(SEPARATOR);
  out += ABCBAC::run();
  out += std::string(SEPARATOR);
  out += ABCBAD::run();
  out += std::string(SEPARATOR);
  out += ABCBAE::run();
  return out;
}

}