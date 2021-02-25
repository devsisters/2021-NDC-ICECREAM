#include "ACBC.h"
#include "A/ACBCA.h"
#include "B/ACBCB.h"
#include "C/ACBCC.h"
#include "D/ACBCD.h"
#include "E/ACBCE.h"

namespace ACBC {

std::string run() {
  std::string out("ACBC");
  out += std::string(SEPARATOR);
  out += ACBCA::run();
  out += std::string(SEPARATOR);
  out += ACBCB::run();
  out += std::string(SEPARATOR);
  out += ACBCC::run();
  out += std::string(SEPARATOR);
  out += ACBCD::run();
  out += std::string(SEPARATOR);
  out += ACBCE::run();
  return out;
}

}