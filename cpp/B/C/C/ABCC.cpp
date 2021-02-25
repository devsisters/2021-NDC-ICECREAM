#include "ABCC.h"
#include "A/ABCCA.h"
#include "B/ABCCB.h"
#include "C/ABCCC.h"
#include "D/ABCCD.h"
#include "E/ABCCE.h"

namespace ABCC {

std::string run() {
  std::string out("ABCC");
  out += std::string(SEPARATOR);
  out += ABCCA::run();
  out += std::string(SEPARATOR);
  out += ABCCB::run();
  out += std::string(SEPARATOR);
  out += ABCCC::run();
  out += std::string(SEPARATOR);
  out += ABCCD::run();
  out += std::string(SEPARATOR);
  out += ABCCE::run();
  return out;
}

}