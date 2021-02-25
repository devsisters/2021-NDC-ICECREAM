#include "AECCA.h"
#include "A/AECCAA.h"
#include "B/AECCAB.h"
#include "C/AECCAC.h"
#include "D/AECCAD.h"
#include "E/AECCAE.h"

namespace AECCA {

std::string run() {
  std::string out("AECCA");
  out += std::string(SEPARATOR);
  out += AECCAA::run();
  out += std::string(SEPARATOR);
  out += AECCAB::run();
  out += std::string(SEPARATOR);
  out += AECCAC::run();
  out += std::string(SEPARATOR);
  out += AECCAD::run();
  out += std::string(SEPARATOR);
  out += AECCAE::run();
  return out;
}

}