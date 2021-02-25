#include "ADCA.h"
#include "A/ADCAA.h"
#include "B/ADCAB.h"
#include "C/ADCAC.h"
#include "D/ADCAD.h"
#include "E/ADCAE.h"

namespace ADCA {

std::string run() {
  std::string out("ADCA");
  out += std::string(SEPARATOR);
  out += ADCAA::run();
  out += std::string(SEPARATOR);
  out += ADCAB::run();
  out += std::string(SEPARATOR);
  out += ADCAC::run();
  out += std::string(SEPARATOR);
  out += ADCAD::run();
  out += std::string(SEPARATOR);
  out += ADCAE::run();
  return out;
}

}