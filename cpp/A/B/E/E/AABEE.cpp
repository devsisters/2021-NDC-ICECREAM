#include "AABEE.h"
#include "A/AABEEA.h"
#include "B/AABEEB.h"
#include "C/AABEEC.h"
#include "D/AABEED.h"
#include "E/AABEEE.h"

namespace AABEE {

std::string run() {
  std::string out("AABEE");
  out += std::string(SEPARATOR);
  out += AABEEA::run();
  out += std::string(SEPARATOR);
  out += AABEEB::run();
  out += std::string(SEPARATOR);
  out += AABEEC::run();
  out += std::string(SEPARATOR);
  out += AABEED::run();
  out += std::string(SEPARATOR);
  out += AABEEE::run();
  return out;
}

}