#include "AABBC.h"
#include "A/AABBCA.h"
#include "B/AABBCB.h"
#include "C/AABBCC.h"
#include "D/AABBCD.h"
#include "E/AABBCE.h"

namespace AABBC {

std::string run() {
  std::string out("AABBC");
  out += std::string(SEPARATOR);
  out += AABBCA::run();
  out += std::string(SEPARATOR);
  out += AABBCB::run();
  out += std::string(SEPARATOR);
  out += AABBCC::run();
  out += std::string(SEPARATOR);
  out += AABBCD::run();
  out += std::string(SEPARATOR);
  out += AABBCE::run();
  return out;
}

}