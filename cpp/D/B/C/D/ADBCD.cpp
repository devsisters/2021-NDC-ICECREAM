#include "ADBCD.h"
#include "A/ADBCDA.h"
#include "B/ADBCDB.h"
#include "C/ADBCDC.h"
#include "D/ADBCDD.h"
#include "E/ADBCDE.h"

namespace ADBCD {

std::string run() {
  std::string out("ADBCD");
  out += std::string(SEPARATOR);
  out += ADBCDA::run();
  out += std::string(SEPARATOR);
  out += ADBCDB::run();
  out += std::string(SEPARATOR);
  out += ADBCDC::run();
  out += std::string(SEPARATOR);
  out += ADBCDD::run();
  out += std::string(SEPARATOR);
  out += ADBCDE::run();
  return out;
}

}