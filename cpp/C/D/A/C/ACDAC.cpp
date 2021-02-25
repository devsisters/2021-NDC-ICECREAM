#include "ACDAC.h"
#include "A/ACDACA.h"
#include "B/ACDACB.h"
#include "C/ACDACC.h"
#include "D/ACDACD.h"
#include "E/ACDACE.h"

namespace ACDAC {

std::string run() {
  std::string out("ACDAC");
  out += std::string(SEPARATOR);
  out += ACDACA::run();
  out += std::string(SEPARATOR);
  out += ACDACB::run();
  out += std::string(SEPARATOR);
  out += ACDACC::run();
  out += std::string(SEPARATOR);
  out += ACDACD::run();
  out += std::string(SEPARATOR);
  out += ACDACE::run();
  return out;
}

}