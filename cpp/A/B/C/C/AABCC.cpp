#include "AABCC.h"
#include "A/AABCCA.h"
#include "B/AABCCB.h"
#include "C/AABCCC.h"
#include "D/AABCCD.h"
#include "E/AABCCE.h"

namespace AABCC {

std::string run() {
  std::string out("AABCC");
  out += std::string(SEPARATOR);
  out += AABCCA::run();
  out += std::string(SEPARATOR);
  out += AABCCB::run();
  out += std::string(SEPARATOR);
  out += AABCCC::run();
  out += std::string(SEPARATOR);
  out += AABCCD::run();
  out += std::string(SEPARATOR);
  out += AABCCE::run();
  return out;
}

}