#include "ABCAC.h"
#include "A/ABCACA.h"
#include "B/ABCACB.h"
#include "C/ABCACC.h"
#include "D/ABCACD.h"
#include "E/ABCACE.h"

namespace ABCAC {

std::string run() {
  std::string out("ABCAC");
  out += std::string(SEPARATOR);
  out += ABCACA::run();
  out += std::string(SEPARATOR);
  out += ABCACB::run();
  out += std::string(SEPARATOR);
  out += ABCACC::run();
  out += std::string(SEPARATOR);
  out += ABCACD::run();
  out += std::string(SEPARATOR);
  out += ABCACE::run();
  return out;
}

}