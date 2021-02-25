#include "ABAAE.h"
#include "A/ABAAEA.h"
#include "B/ABAAEB.h"
#include "C/ABAAEC.h"
#include "D/ABAAED.h"
#include "E/ABAAEE.h"

namespace ABAAE {

std::string run() {
  std::string out("ABAAE");
  out += std::string(SEPARATOR);
  out += ABAAEA::run();
  out += std::string(SEPARATOR);
  out += ABAAEB::run();
  out += std::string(SEPARATOR);
  out += ABAAEC::run();
  out += std::string(SEPARATOR);
  out += ABAAED::run();
  out += std::string(SEPARATOR);
  out += ABAAEE::run();
  return out;
}

}