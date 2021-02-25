#include "ADAA.h"
#include "A/ADAAA.h"
#include "B/ADAAB.h"
#include "C/ADAAC.h"
#include "D/ADAAD.h"
#include "E/ADAAE.h"

namespace ADAA {

std::string run() {
  std::string out("ADAA");
  out += std::string(SEPARATOR);
  out += ADAAA::run();
  out += std::string(SEPARATOR);
  out += ADAAB::run();
  out += std::string(SEPARATOR);
  out += ADAAC::run();
  out += std::string(SEPARATOR);
  out += ADAAD::run();
  out += std::string(SEPARATOR);
  out += ADAAE::run();
  return out;
}

}