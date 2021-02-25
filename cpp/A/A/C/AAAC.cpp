#include "AAAC.h"
#include "A/AAACA.h"
#include "B/AAACB.h"
#include "C/AAACC.h"
#include "D/AAACD.h"
#include "E/AAACE.h"

namespace AAAC {

std::string run() {
  std::string out("AAAC");
  out += std::string(SEPARATOR);
  out += AAACA::run();
  out += std::string(SEPARATOR);
  out += AAACB::run();
  out += std::string(SEPARATOR);
  out += AAACC::run();
  out += std::string(SEPARATOR);
  out += AAACD::run();
  out += std::string(SEPARATOR);
  out += AAACE::run();
  return out;
}

}