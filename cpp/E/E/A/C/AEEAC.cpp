#include "AEEAC.h"
#include "A/AEEACA.h"
#include "B/AEEACB.h"
#include "C/AEEACC.h"
#include "D/AEEACD.h"
#include "E/AEEACE.h"

namespace AEEAC {

std::string run() {
  std::string out("AEEAC");
  out += std::string(SEPARATOR);
  out += AEEACA::run();
  out += std::string(SEPARATOR);
  out += AEEACB::run();
  out += std::string(SEPARATOR);
  out += AEEACC::run();
  out += std::string(SEPARATOR);
  out += AEEACD::run();
  out += std::string(SEPARATOR);
  out += AEEACE::run();
  return out;
}

}