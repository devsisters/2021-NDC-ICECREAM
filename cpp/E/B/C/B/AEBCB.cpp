#include "AEBCB.h"
#include "A/AEBCBA.h"
#include "B/AEBCBB.h"
#include "C/AEBCBC.h"
#include "D/AEBCBD.h"
#include "E/AEBCBE.h"

namespace AEBCB {

std::string run() {
  std::string out("AEBCB");
  out += std::string(SEPARATOR);
  out += AEBCBA::run();
  out += std::string(SEPARATOR);
  out += AEBCBB::run();
  out += std::string(SEPARATOR);
  out += AEBCBC::run();
  out += std::string(SEPARATOR);
  out += AEBCBD::run();
  out += std::string(SEPARATOR);
  out += AEBCBE::run();
  return out;
}

}