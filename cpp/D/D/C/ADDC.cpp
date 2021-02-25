#include "ADDC.h"
#include "A/ADDCA.h"
#include "B/ADDCB.h"
#include "C/ADDCC.h"
#include "D/ADDCD.h"
#include "E/ADDCE.h"

namespace ADDC {

std::string run() {
  std::string out("ADDC");
  out += std::string(SEPARATOR);
  out += ADDCA::run();
  out += std::string(SEPARATOR);
  out += ADDCB::run();
  out += std::string(SEPARATOR);
  out += ADDCC::run();
  out += std::string(SEPARATOR);
  out += ADDCD::run();
  out += std::string(SEPARATOR);
  out += ADDCE::run();
  return out;
}

}