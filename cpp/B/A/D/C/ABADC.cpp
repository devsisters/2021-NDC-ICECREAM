#include "ABADC.h"
#include "A/ABADCA.h"
#include "B/ABADCB.h"
#include "C/ABADCC.h"
#include "D/ABADCD.h"
#include "E/ABADCE.h"

namespace ABADC {

std::string run() {
  std::string out("ABADC");
  out += std::string(SEPARATOR);
  out += ABADCA::run();
  out += std::string(SEPARATOR);
  out += ABADCB::run();
  out += std::string(SEPARATOR);
  out += ABADCC::run();
  out += std::string(SEPARATOR);
  out += ABADCD::run();
  out += std::string(SEPARATOR);
  out += ABADCE::run();
  return out;
}

}