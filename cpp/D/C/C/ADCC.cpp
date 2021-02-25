#include "ADCC.h"
#include "A/ADCCA.h"
#include "B/ADCCB.h"
#include "C/ADCCC.h"
#include "D/ADCCD.h"
#include "E/ADCCE.h"

namespace ADCC {

std::string run() {
  std::string out("ADCC");
  out += std::string(SEPARATOR);
  out += ADCCA::run();
  out += std::string(SEPARATOR);
  out += ADCCB::run();
  out += std::string(SEPARATOR);
  out += ADCCC::run();
  out += std::string(SEPARATOR);
  out += ADCCD::run();
  out += std::string(SEPARATOR);
  out += ADCCE::run();
  return out;
}

}