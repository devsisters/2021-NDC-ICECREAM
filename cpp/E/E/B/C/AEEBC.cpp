#include "AEEBC.h"
#include "A/AEEBCA.h"
#include "B/AEEBCB.h"
#include "C/AEEBCC.h"
#include "D/AEEBCD.h"
#include "E/AEEBCE.h"

namespace AEEBC {

std::string run() {
  std::string out("AEEBC");
  out += std::string(SEPARATOR);
  out += AEEBCA::run();
  out += std::string(SEPARATOR);
  out += AEEBCB::run();
  out += std::string(SEPARATOR);
  out += AEEBCC::run();
  out += std::string(SEPARATOR);
  out += AEEBCD::run();
  out += std::string(SEPARATOR);
  out += AEEBCE::run();
  return out;
}

}