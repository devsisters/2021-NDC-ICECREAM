#include "ADCBE.h"
#include "A/ADCBEA.h"
#include "B/ADCBEB.h"
#include "C/ADCBEC.h"
#include "D/ADCBED.h"
#include "E/ADCBEE.h"

namespace ADCBE {

std::string run() {
  std::string out("ADCBE");
  out += std::string(SEPARATOR);
  out += ADCBEA::run();
  out += std::string(SEPARATOR);
  out += ADCBEB::run();
  out += std::string(SEPARATOR);
  out += ADCBEC::run();
  out += std::string(SEPARATOR);
  out += ADCBED::run();
  out += std::string(SEPARATOR);
  out += ADCBEE::run();
  return out;
}

}