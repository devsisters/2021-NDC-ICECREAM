#include "AADC.h"
#include "A/AADCA.h"
#include "B/AADCB.h"
#include "C/AADCC.h"
#include "D/AADCD.h"
#include "E/AADCE.h"

namespace AADC {

std::string run() {
  std::string out("AADC");
  out += std::string(SEPARATOR);
  out += AADCA::run();
  out += std::string(SEPARATOR);
  out += AADCB::run();
  out += std::string(SEPARATOR);
  out += AADCC::run();
  out += std::string(SEPARATOR);
  out += AADCD::run();
  out += std::string(SEPARATOR);
  out += AADCE::run();
  return out;
}

}