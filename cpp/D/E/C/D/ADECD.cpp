#include "ADECD.h"
#include "A/ADECDA.h"
#include "B/ADECDB.h"
#include "C/ADECDC.h"
#include "D/ADECDD.h"
#include "E/ADECDE.h"

namespace ADECD {

std::string run() {
  std::string out("ADECD");
  out += std::string(SEPARATOR);
  out += ADECDA::run();
  out += std::string(SEPARATOR);
  out += ADECDB::run();
  out += std::string(SEPARATOR);
  out += ADECDC::run();
  out += std::string(SEPARATOR);
  out += ADECDD::run();
  out += std::string(SEPARATOR);
  out += ADECDE::run();
  return out;
}

}