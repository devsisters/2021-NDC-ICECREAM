#include "ACDBC.h"
#include "A/ACDBCA.h"
#include "B/ACDBCB.h"
#include "C/ACDBCC.h"
#include "D/ACDBCD.h"
#include "E/ACDBCE.h"

namespace ACDBC {

std::string run() {
  std::string out("ACDBC");
  out += std::string(SEPARATOR);
  out += ACDBCA::run();
  out += std::string(SEPARATOR);
  out += ACDBCB::run();
  out += std::string(SEPARATOR);
  out += ACDBCC::run();
  out += std::string(SEPARATOR);
  out += ACDBCD::run();
  out += std::string(SEPARATOR);
  out += ACDBCE::run();
  return out;
}

}