#include "ACDCB.h"
#include "A/ACDCBA.h"
#include "B/ACDCBB.h"
#include "C/ACDCBC.h"
#include "D/ACDCBD.h"
#include "E/ACDCBE.h"

namespace ACDCB {

std::string run() {
  std::string out("ACDCB");
  out += std::string(SEPARATOR);
  out += ACDCBA::run();
  out += std::string(SEPARATOR);
  out += ACDCBB::run();
  out += std::string(SEPARATOR);
  out += ACDCBC::run();
  out += std::string(SEPARATOR);
  out += ACDCBD::run();
  out += std::string(SEPARATOR);
  out += ACDCBE::run();
  return out;
}

}