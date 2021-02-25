#include "ABCDC.h"
#include "A/ABCDCA.h"
#include "B/ABCDCB.h"
#include "C/ABCDCC.h"
#include "D/ABCDCD.h"
#include "E/ABCDCE.h"

namespace ABCDC {

std::string run() {
  std::string out("ABCDC");
  out += std::string(SEPARATOR);
  out += ABCDCA::run();
  out += std::string(SEPARATOR);
  out += ABCDCB::run();
  out += std::string(SEPARATOR);
  out += ABCDCC::run();
  out += std::string(SEPARATOR);
  out += ABCDCD::run();
  out += std::string(SEPARATOR);
  out += ABCDCE::run();
  return out;
}

}