#include "ADBC.h"
#include "A/ADBCA.h"
#include "B/ADBCB.h"
#include "C/ADBCC.h"
#include "D/ADBCD.h"
#include "E/ADBCE.h"

namespace ADBC {

std::string run() {
  std::string out("ADBC");
  out += std::string(SEPARATOR);
  out += ADBCA::run();
  out += std::string(SEPARATOR);
  out += ADBCB::run();
  out += std::string(SEPARATOR);
  out += ADBCC::run();
  out += std::string(SEPARATOR);
  out += ADBCD::run();
  out += std::string(SEPARATOR);
  out += ADBCE::run();
  return out;
}

}