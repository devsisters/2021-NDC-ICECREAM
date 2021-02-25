#include "ADCBC.h"
#include "A/ADCBCA.h"
#include "B/ADCBCB.h"
#include "C/ADCBCC.h"
#include "D/ADCBCD.h"
#include "E/ADCBCE.h"

namespace ADCBC {

std::string run() {
  std::string out("ADCBC");
  out += std::string(SEPARATOR);
  out += ADCBCA::run();
  out += std::string(SEPARATOR);
  out += ADCBCB::run();
  out += std::string(SEPARATOR);
  out += ADCBCC::run();
  out += std::string(SEPARATOR);
  out += ADCBCD::run();
  out += std::string(SEPARATOR);
  out += ADCBCE::run();
  return out;
}

}