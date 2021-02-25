#include "ACDAA.h"
#include "A/ACDAAA.h"
#include "B/ACDAAB.h"
#include "C/ACDAAC.h"
#include "D/ACDAAD.h"
#include "E/ACDAAE.h"

namespace ACDAA {

std::string run() {
  std::string out("ACDAA");
  out += std::string(SEPARATOR);
  out += ACDAAA::run();
  out += std::string(SEPARATOR);
  out += ACDAAB::run();
  out += std::string(SEPARATOR);
  out += ACDAAC::run();
  out += std::string(SEPARATOR);
  out += ACDAAD::run();
  out += std::string(SEPARATOR);
  out += ACDAAE::run();
  return out;
}

}