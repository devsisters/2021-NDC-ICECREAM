#include "AEAAE.h"
#include "A/AEAAEA.h"
#include "B/AEAAEB.h"
#include "C/AEAAEC.h"
#include "D/AEAAED.h"
#include "E/AEAAEE.h"

namespace AEAAE {

std::string run() {
  std::string out("AEAAE");
  out += std::string(SEPARATOR);
  out += AEAAEA::run();
  out += std::string(SEPARATOR);
  out += AEAAEB::run();
  out += std::string(SEPARATOR);
  out += AEAAEC::run();
  out += std::string(SEPARATOR);
  out += AEAAED::run();
  out += std::string(SEPARATOR);
  out += AEAAEE::run();
  return out;
}

}