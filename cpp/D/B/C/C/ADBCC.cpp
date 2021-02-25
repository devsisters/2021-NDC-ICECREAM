#include "ADBCC.h"
#include "A/ADBCCA.h"
#include "B/ADBCCB.h"
#include "C/ADBCCC.h"
#include "D/ADBCCD.h"
#include "E/ADBCCE.h"

namespace ADBCC {

std::string run() {
  std::string out("ADBCC");
  out += std::string(SEPARATOR);
  out += ADBCCA::run();
  out += std::string(SEPARATOR);
  out += ADBCCB::run();
  out += std::string(SEPARATOR);
  out += ADBCCC::run();
  out += std::string(SEPARATOR);
  out += ADBCCD::run();
  out += std::string(SEPARATOR);
  out += ADBCCE::run();
  return out;
}

}