#include "AAAAC.h"
#include "A/AAAACA.h"
#include "B/AAAACB.h"
#include "C/AAAACC.h"
#include "D/AAAACD.h"
#include "E/AAAACE.h"

namespace AAAAC {

std::string run() {
  std::string out("AAAAC");
  out += std::string(SEPARATOR);
  out += AAAACA::run();
  out += std::string(SEPARATOR);
  out += AAAACB::run();
  out += std::string(SEPARATOR);
  out += AAAACC::run();
  out += std::string(SEPARATOR);
  out += AAAACD::run();
  out += std::string(SEPARATOR);
  out += AAAACE::run();
  return out;
}

}