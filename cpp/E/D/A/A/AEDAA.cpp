#include "AEDAA.h"
#include "A/AEDAAA.h"
#include "B/AEDAAB.h"
#include "C/AEDAAC.h"
#include "D/AEDAAD.h"
#include "E/AEDAAE.h"

namespace AEDAA {

std::string run() {
  std::string out("AEDAA");
  out += std::string(SEPARATOR);
  out += AEDAAA::run();
  out += std::string(SEPARATOR);
  out += AEDAAB::run();
  out += std::string(SEPARATOR);
  out += AEDAAC::run();
  out += std::string(SEPARATOR);
  out += AEDAAD::run();
  out += std::string(SEPARATOR);
  out += AEDAAE::run();
  return out;
}

}