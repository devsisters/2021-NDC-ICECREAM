#include "AAEAA.h"
#include "A/AAEAAA.h"
#include "B/AAEAAB.h"
#include "C/AAEAAC.h"
#include "D/AAEAAD.h"
#include "E/AAEAAE.h"

namespace AAEAA {

std::string run() {
  std::string out("AAEAA");
  out += std::string(SEPARATOR);
  out += AAEAAA::run();
  out += std::string(SEPARATOR);
  out += AAEAAB::run();
  out += std::string(SEPARATOR);
  out += AAEAAC::run();
  out += std::string(SEPARATOR);
  out += AAEAAD::run();
  out += std::string(SEPARATOR);
  out += AAEAAE::run();
  return out;
}

}