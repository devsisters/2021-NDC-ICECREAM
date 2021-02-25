#include "AEDCC.h"
#include "A/AEDCCA.h"
#include "B/AEDCCB.h"
#include "C/AEDCCC.h"
#include "D/AEDCCD.h"
#include "E/AEDCCE.h"

namespace AEDCC {

std::string run() {
  std::string out("AEDCC");
  out += std::string(SEPARATOR);
  out += AEDCCA::run();
  out += std::string(SEPARATOR);
  out += AEDCCB::run();
  out += std::string(SEPARATOR);
  out += AEDCCC::run();
  out += std::string(SEPARATOR);
  out += AEDCCD::run();
  out += std::string(SEPARATOR);
  out += AEDCCE::run();
  return out;
}

}