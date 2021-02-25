#include "AEDCB.h"
#include "A/AEDCBA.h"
#include "B/AEDCBB.h"
#include "C/AEDCBC.h"
#include "D/AEDCBD.h"
#include "E/AEDCBE.h"

namespace AEDCB {

std::string run() {
  std::string out("AEDCB");
  out += std::string(SEPARATOR);
  out += AEDCBA::run();
  out += std::string(SEPARATOR);
  out += AEDCBB::run();
  out += std::string(SEPARATOR);
  out += AEDCBC::run();
  out += std::string(SEPARATOR);
  out += AEDCBD::run();
  out += std::string(SEPARATOR);
  out += AEDCBE::run();
  return out;
}

}