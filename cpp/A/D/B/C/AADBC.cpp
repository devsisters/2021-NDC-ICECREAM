#include "AADBC.h"
#include "A/AADBCA.h"
#include "B/AADBCB.h"
#include "C/AADBCC.h"
#include "D/AADBCD.h"
#include "E/AADBCE.h"

namespace AADBC {

std::string run() {
  std::string out("AADBC");
  out += std::string(SEPARATOR);
  out += AADBCA::run();
  out += std::string(SEPARATOR);
  out += AADBCB::run();
  out += std::string(SEPARATOR);
  out += AADBCC::run();
  out += std::string(SEPARATOR);
  out += AADBCD::run();
  out += std::string(SEPARATOR);
  out += AADBCE::run();
  return out;
}

}