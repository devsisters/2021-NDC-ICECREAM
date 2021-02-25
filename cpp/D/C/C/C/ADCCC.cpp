#include "ADCCC.h"
#include "A/ADCCCA.h"
#include "B/ADCCCB.h"
#include "C/ADCCCC.h"
#include "D/ADCCCD.h"
#include "E/ADCCCE.h"

namespace ADCCC {

std::string run() {
  std::string out("ADCCC");
  out += std::string(SEPARATOR);
  out += ADCCCA::run();
  out += std::string(SEPARATOR);
  out += ADCCCB::run();
  out += std::string(SEPARATOR);
  out += ADCCCC::run();
  out += std::string(SEPARATOR);
  out += ADCCCD::run();
  out += std::string(SEPARATOR);
  out += ADCCCE::run();
  return out;
}

}