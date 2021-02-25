#include "AABAC.h"
#include "A/AABACA.h"
#include "B/AABACB.h"
#include "C/AABACC.h"
#include "D/AABACD.h"
#include "E/AABACE.h"

namespace AABAC {

std::string run() {
  std::string out("AABAC");
  out += std::string(SEPARATOR);
  out += AABACA::run();
  out += std::string(SEPARATOR);
  out += AABACB::run();
  out += std::string(SEPARATOR);
  out += AABACC::run();
  out += std::string(SEPARATOR);
  out += AABACD::run();
  out += std::string(SEPARATOR);
  out += AABACE::run();
  return out;
}

}