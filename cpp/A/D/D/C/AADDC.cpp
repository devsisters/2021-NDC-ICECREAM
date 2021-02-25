#include "AADDC.h"
#include "A/AADDCA.h"
#include "B/AADDCB.h"
#include "C/AADDCC.h"
#include "D/AADDCD.h"
#include "E/AADDCE.h"

namespace AADDC {

std::string run() {
  std::string out("AADDC");
  out += std::string(SEPARATOR);
  out += AADDCA::run();
  out += std::string(SEPARATOR);
  out += AADDCB::run();
  out += std::string(SEPARATOR);
  out += AADDCC::run();
  out += std::string(SEPARATOR);
  out += AADDCD::run();
  out += std::string(SEPARATOR);
  out += AADDCE::run();
  return out;
}

}