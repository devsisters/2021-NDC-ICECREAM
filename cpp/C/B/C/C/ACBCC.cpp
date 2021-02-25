#include "ACBCC.h"
#include "A/ACBCCA.h"
#include "B/ACBCCB.h"
#include "C/ACBCCC.h"
#include "D/ACBCCD.h"
#include "E/ACBCCE.h"

namespace ACBCC {

std::string run() {
  std::string out("ACBCC");
  out += std::string(SEPARATOR);
  out += ACBCCA::run();
  out += std::string(SEPARATOR);
  out += ACBCCB::run();
  out += std::string(SEPARATOR);
  out += ACBCCC::run();
  out += std::string(SEPARATOR);
  out += ACBCCD::run();
  out += std::string(SEPARATOR);
  out += ACBCCE::run();
  return out;
}

}