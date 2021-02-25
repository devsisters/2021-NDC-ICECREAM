#include "ACEDC.h"
#include "A/ACEDCA.h"
#include "B/ACEDCB.h"
#include "C/ACEDCC.h"
#include "D/ACEDCD.h"
#include "E/ACEDCE.h"

namespace ACEDC {

std::string run() {
  std::string out("ACEDC");
  out += std::string(SEPARATOR);
  out += ACEDCA::run();
  out += std::string(SEPARATOR);
  out += ACEDCB::run();
  out += std::string(SEPARATOR);
  out += ACEDCC::run();
  out += std::string(SEPARATOR);
  out += ACEDCD::run();
  out += std::string(SEPARATOR);
  out += ACEDCE::run();
  return out;
}

}