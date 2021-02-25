#include "ACBDD.h"
#include "A/ACBDDA.h"
#include "B/ACBDDB.h"
#include "C/ACBDDC.h"
#include "D/ACBDDD.h"
#include "E/ACBDDE.h"

namespace ACBDD {

std::string run() {
  std::string out("ACBDD");
  out += std::string(SEPARATOR);
  out += ACBDDA::run();
  out += std::string(SEPARATOR);
  out += ACBDDB::run();
  out += std::string(SEPARATOR);
  out += ACBDDC::run();
  out += std::string(SEPARATOR);
  out += ACBDDD::run();
  out += std::string(SEPARATOR);
  out += ACBDDE::run();
  return out;
}

}