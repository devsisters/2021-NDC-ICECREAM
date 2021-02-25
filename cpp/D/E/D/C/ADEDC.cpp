#include "ADEDC.h"
#include "A/ADEDCA.h"
#include "B/ADEDCB.h"
#include "C/ADEDCC.h"
#include "D/ADEDCD.h"
#include "E/ADEDCE.h"

namespace ADEDC {

std::string run() {
  std::string out("ADEDC");
  out += std::string(SEPARATOR);
  out += ADEDCA::run();
  out += std::string(SEPARATOR);
  out += ADEDCB::run();
  out += std::string(SEPARATOR);
  out += ADEDCC::run();
  out += std::string(SEPARATOR);
  out += ADEDCD::run();
  out += std::string(SEPARATOR);
  out += ADEDCE::run();
  return out;
}

}