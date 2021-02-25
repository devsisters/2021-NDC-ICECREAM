#include "AEAA.h"
#include "A/AEAAA.h"
#include "B/AEAAB.h"
#include "C/AEAAC.h"
#include "D/AEAAD.h"
#include "E/AEAAE.h"

namespace AEAA {

std::string run() {
  std::string out("AEAA");
  out += std::string(SEPARATOR);
  out += AEAAA::run();
  out += std::string(SEPARATOR);
  out += AEAAB::run();
  out += std::string(SEPARATOR);
  out += AEAAC::run();
  out += std::string(SEPARATOR);
  out += AEAAD::run();
  out += std::string(SEPARATOR);
  out += AEAAE::run();
  return out;
}

}