#include "AAEBC.h"
#include "A/AAEBCA.h"
#include "B/AAEBCB.h"
#include "C/AAEBCC.h"
#include "D/AAEBCD.h"
#include "E/AAEBCE.h"

namespace AAEBC {

std::string run() {
  std::string out("AAEBC");
  out += std::string(SEPARATOR);
  out += AAEBCA::run();
  out += std::string(SEPARATOR);
  out += AAEBCB::run();
  out += std::string(SEPARATOR);
  out += AAEBCC::run();
  out += std::string(SEPARATOR);
  out += AAEBCD::run();
  out += std::string(SEPARATOR);
  out += AAEBCE::run();
  return out;
}

}