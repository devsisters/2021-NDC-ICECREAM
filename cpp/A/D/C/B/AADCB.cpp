#include "AADCB.h"
#include "A/AADCBA.h"
#include "B/AADCBB.h"
#include "C/AADCBC.h"
#include "D/AADCBD.h"
#include "E/AADCBE.h"

namespace AADCB {

std::string run() {
  std::string out("AADCB");
  out += std::string(SEPARATOR);
  out += AADCBA::run();
  out += std::string(SEPARATOR);
  out += AADCBB::run();
  out += std::string(SEPARATOR);
  out += AADCBC::run();
  out += std::string(SEPARATOR);
  out += AADCBD::run();
  out += std::string(SEPARATOR);
  out += AADCBE::run();
  return out;
}

}