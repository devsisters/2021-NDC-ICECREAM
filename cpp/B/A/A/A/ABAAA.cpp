#include "ABAAA.h"
#include "A/ABAAAA.h"
#include "B/ABAAAB.h"
#include "C/ABAAAC.h"
#include "D/ABAAAD.h"
#include "E/ABAAAE.h"

namespace ABAAA {

std::string run() {
  std::string out("ABAAA");
  out += std::string(SEPARATOR);
  out += ABAAAA::run();
  out += std::string(SEPARATOR);
  out += ABAAAB::run();
  out += std::string(SEPARATOR);
  out += ABAAAC::run();
  out += std::string(SEPARATOR);
  out += ABAAAD::run();
  out += std::string(SEPARATOR);
  out += ABAAAE::run();
  return out;
}

}