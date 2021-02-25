#include "AAADC.h"
#include "A/AAADCA.h"
#include "B/AAADCB.h"
#include "C/AAADCC.h"
#include "D/AAADCD.h"
#include "E/AAADCE.h"

namespace AAADC {

std::string run() {
  std::string out("AAADC");
  out += std::string(SEPARATOR);
  out += AAADCA::run();
  out += std::string(SEPARATOR);
  out += AAADCB::run();
  out += std::string(SEPARATOR);
  out += AAADCC::run();
  out += std::string(SEPARATOR);
  out += AAADCD::run();
  out += std::string(SEPARATOR);
  out += AAADCE::run();
  return out;
}

}