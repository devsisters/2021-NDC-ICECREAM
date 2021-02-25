#include "AABCB.h"
#include "A/AABCBA.h"
#include "B/AABCBB.h"
#include "C/AABCBC.h"
#include "D/AABCBD.h"
#include "E/AABCBE.h"

namespace AABCB {

std::string run() {
  std::string out("AABCB");
  out += std::string(SEPARATOR);
  out += AABCBA::run();
  out += std::string(SEPARATOR);
  out += AABCBB::run();
  out += std::string(SEPARATOR);
  out += AABCBC::run();
  out += std::string(SEPARATOR);
  out += AABCBD::run();
  out += std::string(SEPARATOR);
  out += AABCBE::run();
  return out;
}

}