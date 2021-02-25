#include "AEBDC.h"
#include "A/AEBDCA.h"
#include "B/AEBDCB.h"
#include "C/AEBDCC.h"
#include "D/AEBDCD.h"
#include "E/AEBDCE.h"

namespace AEBDC {

std::string run() {
  std::string out("AEBDC");
  out += std::string(SEPARATOR);
  out += AEBDCA::run();
  out += std::string(SEPARATOR);
  out += AEBDCB::run();
  out += std::string(SEPARATOR);
  out += AEBDCC::run();
  out += std::string(SEPARATOR);
  out += AEBDCD::run();
  out += std::string(SEPARATOR);
  out += AEBDCE::run();
  return out;
}

}