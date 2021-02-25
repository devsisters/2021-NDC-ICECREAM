#include "AEAAA.h"
#include "A/AEAAAA.h"
#include "B/AEAAAB.h"
#include "C/AEAAAC.h"
#include "D/AEAAAD.h"
#include "E/AEAAAE.h"

namespace AEAAA {

std::string run() {
  std::string out("AEAAA");
  out += std::string(SEPARATOR);
  out += AEAAAA::run();
  out += std::string(SEPARATOR);
  out += AEAAAB::run();
  out += std::string(SEPARATOR);
  out += AEAAAC::run();
  out += std::string(SEPARATOR);
  out += AEAAAD::run();
  out += std::string(SEPARATOR);
  out += AEAAAE::run();
  return out;
}

}