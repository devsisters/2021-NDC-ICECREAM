#include "ACBAC.h"
#include "A/ACBACA.h"
#include "B/ACBACB.h"
#include "C/ACBACC.h"
#include "D/ACBACD.h"
#include "E/ACBACE.h"

namespace ACBAC {

std::string run() {
  std::string out("ACBAC");
  out += std::string(SEPARATOR);
  out += ACBACA::run();
  out += std::string(SEPARATOR);
  out += ACBACB::run();
  out += std::string(SEPARATOR);
  out += ACBACC::run();
  out += std::string(SEPARATOR);
  out += ACBACD::run();
  out += std::string(SEPARATOR);
  out += ACBACE::run();
  return out;
}

}