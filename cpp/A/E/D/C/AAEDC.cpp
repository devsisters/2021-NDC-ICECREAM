#include "AAEDC.h"
#include "A/AAEDCA.h"
#include "B/AAEDCB.h"
#include "C/AAEDCC.h"
#include "D/AAEDCD.h"
#include "E/AAEDCE.h"

namespace AAEDC {

std::string run() {
  std::string out("AAEDC");
  out += std::string(SEPARATOR);
  out += AAEDCA::run();
  out += std::string(SEPARATOR);
  out += AAEDCB::run();
  out += std::string(SEPARATOR);
  out += AAEDCC::run();
  out += std::string(SEPARATOR);
  out += AAEDCD::run();
  out += std::string(SEPARATOR);
  out += AAEDCE::run();
  return out;
}

}