#include "ABDBC.h"
#include "A/ABDBCA.h"
#include "B/ABDBCB.h"
#include "C/ABDBCC.h"
#include "D/ABDBCD.h"
#include "E/ABDBCE.h"

namespace ABDBC {

std::string run() {
  std::string out("ABDBC");
  out += std::string(SEPARATOR);
  out += ABDBCA::run();
  out += std::string(SEPARATOR);
  out += ABDBCB::run();
  out += std::string(SEPARATOR);
  out += ABDBCC::run();
  out += std::string(SEPARATOR);
  out += ABDBCD::run();
  out += std::string(SEPARATOR);
  out += ABDBCE::run();
  return out;
}

}