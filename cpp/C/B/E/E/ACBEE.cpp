#include "ACBEE.h"
#include "A/ACBEEA.h"
#include "B/ACBEEB.h"
#include "C/ACBEEC.h"
#include "D/ACBEED.h"
#include "E/ACBEEE.h"

namespace ACBEE {

std::string run() {
  std::string out("ACBEE");
  out += std::string(SEPARATOR);
  out += ACBEEA::run();
  out += std::string(SEPARATOR);
  out += ACBEEB::run();
  out += std::string(SEPARATOR);
  out += ACBEEC::run();
  out += std::string(SEPARATOR);
  out += ACBEED::run();
  out += std::string(SEPARATOR);
  out += ACBEEE::run();
  return out;
}

}