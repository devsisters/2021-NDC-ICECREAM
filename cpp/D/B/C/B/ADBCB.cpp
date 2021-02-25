#include "ADBCB.h"
#include "A/ADBCBA.h"
#include "B/ADBCBB.h"
#include "C/ADBCBC.h"
#include "D/ADBCBD.h"
#include "E/ADBCBE.h"

namespace ADBCB {

std::string run() {
  std::string out("ADBCB");
  out += std::string(SEPARATOR);
  out += ADBCBA::run();
  out += std::string(SEPARATOR);
  out += ADBCBB::run();
  out += std::string(SEPARATOR);
  out += ADBCBC::run();
  out += std::string(SEPARATOR);
  out += ADBCBD::run();
  out += std::string(SEPARATOR);
  out += ADBCBE::run();
  return out;
}

}