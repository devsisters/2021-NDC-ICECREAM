#include "ABCB.h"
#include "A/ABCBA.h"
#include "B/ABCBB.h"
#include "C/ABCBC.h"
#include "D/ABCBD.h"
#include "E/ABCBE.h"

namespace ABCB {

std::string run() {
  std::string out("ABCB");
  out += std::string(SEPARATOR);
  out += ABCBA::run();
  out += std::string(SEPARATOR);
  out += ABCBB::run();
  out += std::string(SEPARATOR);
  out += ABCBC::run();
  out += std::string(SEPARATOR);
  out += ABCBD::run();
  out += std::string(SEPARATOR);
  out += ABCBE::run();
  return out;
}

}