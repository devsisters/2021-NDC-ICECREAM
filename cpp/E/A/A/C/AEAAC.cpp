#include "AEAAC.h"
#include "A/AEAACA.h"
#include "B/AEAACB.h"
#include "C/AEAACC.h"
#include "D/AEAACD.h"
#include "E/AEAACE.h"

namespace AEAAC {

std::string run() {
  std::string out("AEAAC");
  out += std::string(SEPARATOR);
  out += AEAACA::run();
  out += std::string(SEPARATOR);
  out += AEAACB::run();
  out += std::string(SEPARATOR);
  out += AEAACC::run();
  out += std::string(SEPARATOR);
  out += AEAACD::run();
  out += std::string(SEPARATOR);
  out += AEAACE::run();
  return out;
}

}