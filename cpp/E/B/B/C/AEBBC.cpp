#include "AEBBC.h"
#include "A/AEBBCA.h"
#include "B/AEBBCB.h"
#include "C/AEBBCC.h"
#include "D/AEBBCD.h"
#include "E/AEBBCE.h"

namespace AEBBC {

std::string run() {
  std::string out("AEBBC");
  out += std::string(SEPARATOR);
  out += AEBBCA::run();
  out += std::string(SEPARATOR);
  out += AEBBCB::run();
  out += std::string(SEPARATOR);
  out += AEBBCC::run();
  out += std::string(SEPARATOR);
  out += AEBBCD::run();
  out += std::string(SEPARATOR);
  out += AEBBCE::run();
  return out;
}

}