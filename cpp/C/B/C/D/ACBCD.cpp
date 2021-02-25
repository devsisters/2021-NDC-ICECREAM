#include "ACBCD.h"
#include "A/ACBCDA.h"
#include "B/ACBCDB.h"
#include "C/ACBCDC.h"
#include "D/ACBCDD.h"
#include "E/ACBCDE.h"

namespace ACBCD {

std::string run() {
  std::string out("ACBCD");
  out += std::string(SEPARATOR);
  out += ACBCDA::run();
  out += std::string(SEPARATOR);
  out += ACBCDB::run();
  out += std::string(SEPARATOR);
  out += ACBCDC::run();
  out += std::string(SEPARATOR);
  out += ACBCDD::run();
  out += std::string(SEPARATOR);
  out += ACBCDE::run();
  return out;
}

}