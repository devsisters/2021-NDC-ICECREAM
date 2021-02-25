#include "AAABC.h"
#include "A/AAABCA.h"
#include "B/AAABCB.h"
#include "C/AAABCC.h"
#include "D/AAABCD.h"
#include "E/AAABCE.h"

namespace AAABC {

std::string run() {
  std::string out("AAABC");
  out += std::string(SEPARATOR);
  out += AAABCA::run();
  out += std::string(SEPARATOR);
  out += AAABCB::run();
  out += std::string(SEPARATOR);
  out += AAABCC::run();
  out += std::string(SEPARATOR);
  out += AAABCD::run();
  out += std::string(SEPARATOR);
  out += AAABCE::run();
  return out;
}

}