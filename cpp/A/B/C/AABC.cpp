#include "AABC.h"
#include "A/AABCA.h"
#include "B/AABCB.h"
#include "C/AABCC.h"
#include "D/AABCD.h"
#include "E/AABCE.h"

namespace AABC {

std::string run() {
  std::string out("AABC");
  out += std::string(SEPARATOR);
  out += AABCA::run();
  out += std::string(SEPARATOR);
  out += AABCB::run();
  out += std::string(SEPARATOR);
  out += AABCC::run();
  out += std::string(SEPARATOR);
  out += AABCD::run();
  out += std::string(SEPARATOR);
  out += AABCE::run();
  return out;
}

}