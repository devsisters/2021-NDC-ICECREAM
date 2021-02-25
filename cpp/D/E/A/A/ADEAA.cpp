#include "ADEAA.h"
#include "A/ADEAAA.h"
#include "B/ADEAAB.h"
#include "C/ADEAAC.h"
#include "D/ADEAAD.h"
#include "E/ADEAAE.h"

namespace ADEAA {

std::string run() {
  std::string out("ADEAA");
  out += std::string(SEPARATOR);
  out += ADEAAA::run();
  out += std::string(SEPARATOR);
  out += ADEAAB::run();
  out += std::string(SEPARATOR);
  out += ADEAAC::run();
  out += std::string(SEPARATOR);
  out += ADEAAD::run();
  out += std::string(SEPARATOR);
  out += ADEAAE::run();
  return out;
}

}