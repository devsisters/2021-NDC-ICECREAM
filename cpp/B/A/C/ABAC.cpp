#include "ABAC.h"
#include "A/ABACA.h"
#include "B/ABACB.h"
#include "C/ABACC.h"
#include "D/ABACD.h"
#include "E/ABACE.h"

namespace ABAC {

std::string run() {
  std::string out("ABAC");
  out += std::string(SEPARATOR);
  out += ABACA::run();
  out += std::string(SEPARATOR);
  out += ABACB::run();
  out += std::string(SEPARATOR);
  out += ABACC::run();
  out += std::string(SEPARATOR);
  out += ABACD::run();
  out += std::string(SEPARATOR);
  out += ABACE::run();
  return out;
}

}