#include "AEDBC.h"
#include "A/AEDBCA.h"
#include "B/AEDBCB.h"
#include "C/AEDBCC.h"
#include "D/AEDBCD.h"
#include "E/AEDBCE.h"

namespace AEDBC {

std::string run() {
  std::string out("AEDBC");
  out += std::string(SEPARATOR);
  out += AEDBCA::run();
  out += std::string(SEPARATOR);
  out += AEDBCB::run();
  out += std::string(SEPARATOR);
  out += AEDBCC::run();
  out += std::string(SEPARATOR);
  out += AEDBCD::run();
  out += std::string(SEPARATOR);
  out += AEDBCE::run();
  return out;
}

}