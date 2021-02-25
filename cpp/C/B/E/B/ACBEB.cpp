#include "ACBEB.h"
#include "A/ACBEBA.h"
#include "B/ACBEBB.h"
#include "C/ACBEBC.h"
#include "D/ACBEBD.h"
#include "E/ACBEBE.h"

namespace ACBEB {

std::string run() {
  std::string out("ACBEB");
  out += std::string(SEPARATOR);
  out += ACBEBA::run();
  out += std::string(SEPARATOR);
  out += ACBEBB::run();
  out += std::string(SEPARATOR);
  out += ACBEBC::run();
  out += std::string(SEPARATOR);
  out += ACBEBD::run();
  out += std::string(SEPARATOR);
  out += ACBEBE::run();
  return out;
}

}