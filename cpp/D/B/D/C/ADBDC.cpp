#include "ADBDC.h"
#include "A/ADBDCA.h"
#include "B/ADBDCB.h"
#include "C/ADBDCC.h"
#include "D/ADBDCD.h"
#include "E/ADBDCE.h"

namespace ADBDC {

std::string run() {
  std::string out("ADBDC");
  out += std::string(SEPARATOR);
  out += ADBDCA::run();
  out += std::string(SEPARATOR);
  out += ADBDCB::run();
  out += std::string(SEPARATOR);
  out += ADBDCC::run();
  out += std::string(SEPARATOR);
  out += ADBDCD::run();
  out += std::string(SEPARATOR);
  out += ADBDCE::run();
  return out;
}

}