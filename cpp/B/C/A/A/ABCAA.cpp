#include "ABCAA.h"
#include "A/ABCAAA.h"
#include "B/ABCAAB.h"
#include "C/ABCAAC.h"
#include "D/ABCAAD.h"
#include "E/ABCAAE.h"

namespace ABCAA {

std::string run() {
  std::string out("ABCAA");
  out += std::string(SEPARATOR);
  out += ABCAAA::run();
  out += std::string(SEPARATOR);
  out += ABCAAB::run();
  out += std::string(SEPARATOR);
  out += ABCAAC::run();
  out += std::string(SEPARATOR);
  out += ABCAAD::run();
  out += std::string(SEPARATOR);
  out += ABCAAE::run();
  return out;
}

}