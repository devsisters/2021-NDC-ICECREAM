#include "AEBC.h"
#include "A/AEBCA.h"
#include "B/AEBCB.h"
#include "C/AEBCC.h"
#include "D/AEBCD.h"
#include "E/AEBCE.h"

namespace AEBC {

std::string run() {
  std::string out("AEBC");
  out += std::string(SEPARATOR);
  out += AEBCA::run();
  out += std::string(SEPARATOR);
  out += AEBCB::run();
  out += std::string(SEPARATOR);
  out += AEBCC::run();
  out += std::string(SEPARATOR);
  out += AEBCD::run();
  out += std::string(SEPARATOR);
  out += AEBCE::run();
  return out;
}

}