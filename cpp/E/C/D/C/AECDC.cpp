#include "AECDC.h"
#include "A/AECDCA.h"
#include "B/AECDCB.h"
#include "C/AECDCC.h"
#include "D/AECDCD.h"
#include "E/AECDCE.h"

namespace AECDC {

std::string run() {
  std::string out("AECDC");
  out += std::string(SEPARATOR);
  out += AECDCA::run();
  out += std::string(SEPARATOR);
  out += AECDCB::run();
  out += std::string(SEPARATOR);
  out += AECDCC::run();
  out += std::string(SEPARATOR);
  out += AECDCD::run();
  out += std::string(SEPARATOR);
  out += AECDCE::run();
  return out;
}

}