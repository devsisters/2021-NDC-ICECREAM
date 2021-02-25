#include "AAECD.h"
#include "A/AAECDA.h"
#include "B/AAECDB.h"
#include "C/AAECDC.h"
#include "D/AAECDD.h"
#include "E/AAECDE.h"

namespace AAECD {

std::string run() {
  std::string out("AAECD");
  out += std::string(SEPARATOR);
  out += AAECDA::run();
  out += std::string(SEPARATOR);
  out += AAECDB::run();
  out += std::string(SEPARATOR);
  out += AAECDC::run();
  out += std::string(SEPARATOR);
  out += AAECDD::run();
  out += std::string(SEPARATOR);
  out += AAECDE::run();
  return out;
}

}