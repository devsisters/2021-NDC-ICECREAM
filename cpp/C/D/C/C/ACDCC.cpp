#include "ACDCC.h"
#include "A/ACDCCA.h"
#include "B/ACDCCB.h"
#include "C/ACDCCC.h"
#include "D/ACDCCD.h"
#include "E/ACDCCE.h"

namespace ACDCC {

std::string run() {
  std::string out("ACDCC");
  out += std::string(SEPARATOR);
  out += ACDCCA::run();
  out += std::string(SEPARATOR);
  out += ACDCCB::run();
  out += std::string(SEPARATOR);
  out += ACDCCC::run();
  out += std::string(SEPARATOR);
  out += ACDCCD::run();
  out += std::string(SEPARATOR);
  out += ACDCCE::run();
  return out;
}

}