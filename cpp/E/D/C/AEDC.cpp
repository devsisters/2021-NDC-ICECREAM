#include "AEDC.h"
#include "A/AEDCA.h"
#include "B/AEDCB.h"
#include "C/AEDCC.h"
#include "D/AEDCD.h"
#include "E/AEDCE.h"

namespace AEDC {

std::string run() {
  std::string out("AEDC");
  out += std::string(SEPARATOR);
  out += AEDCA::run();
  out += std::string(SEPARATOR);
  out += AEDCB::run();
  out += std::string(SEPARATOR);
  out += AEDCC::run();
  out += std::string(SEPARATOR);
  out += AEDCD::run();
  out += std::string(SEPARATOR);
  out += AEDCE::run();
  return out;
}

}