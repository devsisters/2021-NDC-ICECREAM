#include "ADC.h"
#include "A/ADCA.h"
#include "B/ADCB.h"
#include "C/ADCC.h"
#include "D/ADCD.h"
#include "E/ADCE.h"

namespace ADC {

std::string run() {
  std::string out("ADC");
  out += std::string(SEPARATOR);
  out += ADCA::run();
  out += std::string(SEPARATOR);
  out += ADCB::run();
  out += std::string(SEPARATOR);
  out += ADCC::run();
  out += std::string(SEPARATOR);
  out += ADCD::run();
  out += std::string(SEPARATOR);
  out += ADCE::run();
  return out;
}

}