#include "ADCBA.h"
#include "A/ADCBAA.h"
#include "B/ADCBAB.h"
#include "C/ADCBAC.h"
#include "D/ADCBAD.h"
#include "E/ADCBAE.h"

namespace ADCBA {

std::string run() {
  std::string out("ADCBA");
  out += std::string(SEPARATOR);
  out += ADCBAA::run();
  out += std::string(SEPARATOR);
  out += ADCBAB::run();
  out += std::string(SEPARATOR);
  out += ADCBAC::run();
  out += std::string(SEPARATOR);
  out += ADCBAD::run();
  out += std::string(SEPARATOR);
  out += ADCBAE::run();
  return out;
}

}