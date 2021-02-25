#include "AECBC.h"
#include "A/AECBCA.h"
#include "B/AECBCB.h"
#include "C/AECBCC.h"
#include "D/AECBCD.h"
#include "E/AECBCE.h"

namespace AECBC {

std::string run() {
  std::string out("AECBC");
  out += std::string(SEPARATOR);
  out += AECBCA::run();
  out += std::string(SEPARATOR);
  out += AECBCB::run();
  out += std::string(SEPARATOR);
  out += AECBCC::run();
  out += std::string(SEPARATOR);
  out += AECBCD::run();
  out += std::string(SEPARATOR);
  out += AECBCE::run();
  return out;
}

}