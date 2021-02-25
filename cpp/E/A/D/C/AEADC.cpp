#include "AEADC.h"
#include "A/AEADCA.h"
#include "B/AEADCB.h"
#include "C/AEADCC.h"
#include "D/AEADCD.h"
#include "E/AEADCE.h"

namespace AEADC {

std::string run() {
  std::string out("AEADC");
  out += std::string(SEPARATOR);
  out += AEADCA::run();
  out += std::string(SEPARATOR);
  out += AEADCB::run();
  out += std::string(SEPARATOR);
  out += AEADCC::run();
  out += std::string(SEPARATOR);
  out += AEADCD::run();
  out += std::string(SEPARATOR);
  out += AEADCE::run();
  return out;
}

}