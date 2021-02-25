#include "ADCB.h"
#include "A/ADCBA.h"
#include "B/ADCBB.h"
#include "C/ADCBC.h"
#include "D/ADCBD.h"
#include "E/ADCBE.h"

namespace ADCB {

std::string run() {
  std::string out("ADCB");
  out += std::string(SEPARATOR);
  out += ADCBA::run();
  out += std::string(SEPARATOR);
  out += ADCBB::run();
  out += std::string(SEPARATOR);
  out += ADCBC::run();
  out += std::string(SEPARATOR);
  out += ADCBD::run();
  out += std::string(SEPARATOR);
  out += ADCBE::run();
  return out;
}

}