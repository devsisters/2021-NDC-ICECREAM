#include "AEECD.h"
#include "A/AEECDA.h"
#include "B/AEECDB.h"
#include "C/AEECDC.h"
#include "D/AEECDD.h"
#include "E/AEECDE.h"

namespace AEECD {

std::string run() {
  std::string out("AEECD");
  out += std::string(SEPARATOR);
  out += AEECDA::run();
  out += std::string(SEPARATOR);
  out += AEECDB::run();
  out += std::string(SEPARATOR);
  out += AEECDC::run();
  out += std::string(SEPARATOR);
  out += AEECDD::run();
  out += std::string(SEPARATOR);
  out += AEECDE::run();
  return out;
}

}