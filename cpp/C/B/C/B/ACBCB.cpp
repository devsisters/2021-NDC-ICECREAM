#include "ACBCB.h"
#include "A/ACBCBA.h"
#include "B/ACBCBB.h"
#include "C/ACBCBC.h"
#include "D/ACBCBD.h"
#include "E/ACBCBE.h"

namespace ACBCB {

std::string run() {
  std::string out("ACBCB");
  out += std::string(SEPARATOR);
  out += ACBCBA::run();
  out += std::string(SEPARATOR);
  out += ACBCBB::run();
  out += std::string(SEPARATOR);
  out += ACBCBC::run();
  out += std::string(SEPARATOR);
  out += ACBCBD::run();
  out += std::string(SEPARATOR);
  out += ACBCBE::run();
  return out;
}

}