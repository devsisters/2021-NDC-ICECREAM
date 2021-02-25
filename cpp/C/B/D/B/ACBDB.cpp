#include "ACBDB.h"
#include "A/ACBDBA.h"
#include "B/ACBDBB.h"
#include "C/ACBDBC.h"
#include "D/ACBDBD.h"
#include "E/ACBDBE.h"

namespace ACBDB {

std::string run() {
  std::string out("ACBDB");
  out += std::string(SEPARATOR);
  out += ACBDBA::run();
  out += std::string(SEPARATOR);
  out += ACBDBB::run();
  out += std::string(SEPARATOR);
  out += ACBDBC::run();
  out += std::string(SEPARATOR);
  out += ACBDBD::run();
  out += std::string(SEPARATOR);
  out += ACBDBE::run();
  return out;
}

}