#include "AEEAA.h"
#include "A/AEEAAA.h"
#include "B/AEEAAB.h"
#include "C/AEEAAC.h"
#include "D/AEEAAD.h"
#include "E/AEEAAE.h"

namespace AEEAA {

std::string run() {
  std::string out("AEEAA");
  out += std::string(SEPARATOR);
  out += AEEAAA::run();
  out += std::string(SEPARATOR);
  out += AEEAAB::run();
  out += std::string(SEPARATOR);
  out += AEEAAC::run();
  out += std::string(SEPARATOR);
  out += AEEAAD::run();
  out += std::string(SEPARATOR);
  out += AEEAAE::run();
  return out;
}

}