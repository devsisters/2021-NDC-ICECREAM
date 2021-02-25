#include "ACBDC.h"
#include "A/ACBDCA.h"
#include "B/ACBDCB.h"
#include "C/ACBDCC.h"
#include "D/ACBDCD.h"
#include "E/ACBDCE.h"

namespace ACBDC {

std::string run() {
  std::string out("ACBDC");
  out += std::string(SEPARATOR);
  out += ACBDCA::run();
  out += std::string(SEPARATOR);
  out += ACBDCB::run();
  out += std::string(SEPARATOR);
  out += ACBDCC::run();
  out += std::string(SEPARATOR);
  out += ACBDCD::run();
  out += std::string(SEPARATOR);
  out += ACBDCE::run();
  return out;
}

}