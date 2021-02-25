#include "ABBAC.h"
#include "A/ABBACA.h"
#include "B/ABBACB.h"
#include "C/ABBACC.h"
#include "D/ABBACD.h"
#include "E/ABBACE.h"

namespace ABBAC {

std::string run() {
  std::string out("ABBAC");
  out += std::string(SEPARATOR);
  out += ABBACA::run();
  out += std::string(SEPARATOR);
  out += ABBACB::run();
  out += std::string(SEPARATOR);
  out += ABBACC::run();
  out += std::string(SEPARATOR);
  out += ABBACD::run();
  out += std::string(SEPARATOR);
  out += ABBACE::run();
  return out;
}

}