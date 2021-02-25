#include "ADCAC.h"
#include "A/ADCACA.h"
#include "B/ADCACB.h"
#include "C/ADCACC.h"
#include "D/ADCACD.h"
#include "E/ADCACE.h"

namespace ADCAC {

std::string run() {
  std::string out("ADCAC");
  out += std::string(SEPARATOR);
  out += ADCACA::run();
  out += std::string(SEPARATOR);
  out += ADCACB::run();
  out += std::string(SEPARATOR);
  out += ADCACC::run();
  out += std::string(SEPARATOR);
  out += ADCACD::run();
  out += std::string(SEPARATOR);
  out += ADCACE::run();
  return out;
}

}