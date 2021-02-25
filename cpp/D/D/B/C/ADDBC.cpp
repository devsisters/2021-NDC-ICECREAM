#include "ADDBC.h"
#include "A/ADDBCA.h"
#include "B/ADDBCB.h"
#include "C/ADDBCC.h"
#include "D/ADDBCD.h"
#include "E/ADDBCE.h"

namespace ADDBC {

std::string run() {
  std::string out("ADDBC");
  out += std::string(SEPARATOR);
  out += ADDBCA::run();
  out += std::string(SEPARATOR);
  out += ADDBCB::run();
  out += std::string(SEPARATOR);
  out += ADDBCC::run();
  out += std::string(SEPARATOR);
  out += ADDBCD::run();
  out += std::string(SEPARATOR);
  out += ADDBCE::run();
  return out;
}

}