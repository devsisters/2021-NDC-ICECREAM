#include "AEC.h"
#include "A/AECA.h"
#include "B/AECB.h"
#include "C/AECC.h"
#include "D/AECD.h"
#include "E/AECE.h"

namespace AEC {

std::string run() {
  std::string out("AEC");
  out += std::string(SEPARATOR);
  out += AECA::run();
  out += std::string(SEPARATOR);
  out += AECB::run();
  out += std::string(SEPARATOR);
  out += AECC::run();
  out += std::string(SEPARATOR);
  out += AECD::run();
  out += std::string(SEPARATOR);
  out += AECE::run();
  return out;
}

}