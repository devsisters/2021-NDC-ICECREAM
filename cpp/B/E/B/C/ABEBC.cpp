#include "ABEBC.h"
#include "A/ABEBCA.h"
#include "B/ABEBCB.h"
#include "C/ABEBCC.h"
#include "D/ABEBCD.h"
#include "E/ABEBCE.h"

namespace ABEBC {

std::string run() {
  std::string out("ABEBC");
  out += std::string(SEPARATOR);
  out += ABEBCA::run();
  out += std::string(SEPARATOR);
  out += ABEBCB::run();
  out += std::string(SEPARATOR);
  out += ABEBCC::run();
  out += std::string(SEPARATOR);
  out += ABEBCD::run();
  out += std::string(SEPARATOR);
  out += ABEBCE::run();
  return out;
}

}