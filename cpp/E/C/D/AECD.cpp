#include "AECD.h"
#include "A/AECDA.h"
#include "B/AECDB.h"
#include "C/AECDC.h"
#include "D/AECDD.h"
#include "E/AECDE.h"

namespace AECD {

std::string run() {
  std::string out("AECD");
  out += std::string(SEPARATOR);
  out += AECDA::run();
  out += std::string(SEPARATOR);
  out += AECDB::run();
  out += std::string(SEPARATOR);
  out += AECDC::run();
  out += std::string(SEPARATOR);
  out += AECDD::run();
  out += std::string(SEPARATOR);
  out += AECDE::run();
  return out;
}

}