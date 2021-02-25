#include "ABAAC.h"
#include "A/ABAACA.h"
#include "B/ABAACB.h"
#include "C/ABAACC.h"
#include "D/ABAACD.h"
#include "E/ABAACE.h"

namespace ABAAC {

std::string run() {
  std::string out("ABAAC");
  out += std::string(SEPARATOR);
  out += ABAACA::run();
  out += std::string(SEPARATOR);
  out += ABAACB::run();
  out += std::string(SEPARATOR);
  out += ABAACC::run();
  out += std::string(SEPARATOR);
  out += ABAACD::run();
  out += std::string(SEPARATOR);
  out += ABAACE::run();
  return out;
}

}