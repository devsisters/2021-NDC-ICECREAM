#include "ACBD.h"
#include "A/ACBDA.h"
#include "B/ACBDB.h"
#include "C/ACBDC.h"
#include "D/ACBDD.h"
#include "E/ACBDE.h"

namespace ACBD {

std::string run() {
  std::string out("ACBD");
  out += std::string(SEPARATOR);
  out += ACBDA::run();
  out += std::string(SEPARATOR);
  out += ACBDB::run();
  out += std::string(SEPARATOR);
  out += ACBDC::run();
  out += std::string(SEPARATOR);
  out += ACBDD::run();
  out += std::string(SEPARATOR);
  out += ACBDE::run();
  return out;
}

}