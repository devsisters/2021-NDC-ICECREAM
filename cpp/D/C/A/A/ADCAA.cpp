#include "ADCAA.h"
#include "A/ADCAAA.h"
#include "B/ADCAAB.h"
#include "C/ADCAAC.h"
#include "D/ADCAAD.h"
#include "E/ADCAAE.h"

namespace ADCAA {

std::string run() {
  std::string out("ADCAA");
  out += std::string(SEPARATOR);
  out += ADCAAA::run();
  out += std::string(SEPARATOR);
  out += ADCAAB::run();
  out += std::string(SEPARATOR);
  out += ADCAAC::run();
  out += std::string(SEPARATOR);
  out += ADCAAD::run();
  out += std::string(SEPARATOR);
  out += ADCAAE::run();
  return out;
}

}