#include "ACECD.h"
#include "A/ACECDA.h"
#include "B/ACECDB.h"
#include "C/ACECDC.h"
#include "D/ACECDD.h"
#include "E/ACECDE.h"

namespace ACECD {

std::string run() {
  std::string out("ACECD");
  out += std::string(SEPARATOR);
  out += ACECDA::run();
  out += std::string(SEPARATOR);
  out += ACECDB::run();
  out += std::string(SEPARATOR);
  out += ACECDC::run();
  out += std::string(SEPARATOR);
  out += ACECDD::run();
  out += std::string(SEPARATOR);
  out += ACECDE::run();
  return out;
}

}