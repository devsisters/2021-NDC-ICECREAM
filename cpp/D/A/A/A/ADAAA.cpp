#include "ADAAA.h"
#include "A/ADAAAA.h"
#include "B/ADAAAB.h"
#include "C/ADAAAC.h"
#include "D/ADAAAD.h"
#include "E/ADAAAE.h"

namespace ADAAA {

std::string run() {
  std::string out("ADAAA");
  out += std::string(SEPARATOR);
  out += ADAAAA::run();
  out += std::string(SEPARATOR);
  out += ADAAAB::run();
  out += std::string(SEPARATOR);
  out += ADAAAC::run();
  out += std::string(SEPARATOR);
  out += ADAAAD::run();
  out += std::string(SEPARATOR);
  out += ADAAAE::run();
  return out;
}

}