#include "ACDC.h"
#include "A/ACDCA.h"
#include "B/ACDCB.h"
#include "C/ACDCC.h"
#include "D/ACDCD.h"
#include "E/ACDCE.h"

namespace ACDC {

std::string run() {
  std::string out("ACDC");
  out += std::string(SEPARATOR);
  out += ACDCA::run();
  out += std::string(SEPARATOR);
  out += ACDCB::run();
  out += std::string(SEPARATOR);
  out += ACDCC::run();
  out += std::string(SEPARATOR);
  out += ACDCD::run();
  out += std::string(SEPARATOR);
  out += ACDCE::run();
  return out;
}

}