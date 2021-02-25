#include "AAA.h"
#include "A/AAAA.h"
#include "B/AAAB.h"
#include "C/AAAC.h"
#include "D/AAAD.h"
#include "E/AAAE.h"

namespace AAA {

std::string run() {
  std::string out("AAA");
  out += std::string(SEPARATOR);
  out += AAAA::run();
  out += std::string(SEPARATOR);
  out += AAAB::run();
  out += std::string(SEPARATOR);
  out += AAAC::run();
  out += std::string(SEPARATOR);
  out += AAAD::run();
  out += std::string(SEPARATOR);
  out += AAAE::run();
  return out;
}

}