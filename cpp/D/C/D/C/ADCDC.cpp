#include "ADCDC.h"
#include "A/ADCDCA.h"
#include "B/ADCDCB.h"
#include "C/ADCDCC.h"
#include "D/ADCDCD.h"
#include "E/ADCDCE.h"

namespace ADCDC {

std::string run() {
  std::string out("ADCDC");
  out += std::string(SEPARATOR);
  out += ADCDCA::run();
  out += std::string(SEPARATOR);
  out += ADCDCB::run();
  out += std::string(SEPARATOR);
  out += ADCDCC::run();
  out += std::string(SEPARATOR);
  out += ADCDCD::run();
  out += std::string(SEPARATOR);
  out += ADCDCE::run();
  return out;
}

}