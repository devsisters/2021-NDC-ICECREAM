#include "ADCBB.h"
#include "A/ADCBBA.h"
#include "B/ADCBBB.h"
#include "C/ADCBBC.h"
#include "D/ADCBBD.h"
#include "E/ADCBBE.h"

namespace ADCBB {

std::string run() {
  std::string out("ADCBB");
  out += std::string(SEPARATOR);
  out += ADCBBA::run();
  out += std::string(SEPARATOR);
  out += ADCBBB::run();
  out += std::string(SEPARATOR);
  out += ADCBBC::run();
  out += std::string(SEPARATOR);
  out += ADCBBD::run();
  out += std::string(SEPARATOR);
  out += ADCBBE::run();
  return out;
}

}