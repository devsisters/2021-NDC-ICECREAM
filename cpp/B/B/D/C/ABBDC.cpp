#include "ABBDC.h"
#include "A/ABBDCA.h"
#include "B/ABBDCB.h"
#include "C/ABBDCC.h"
#include "D/ABBDCD.h"
#include "E/ABBDCE.h"

namespace ABBDC {

std::string run() {
  std::string out("ABBDC");
  out += std::string(SEPARATOR);
  out += ABBDCA::run();
  out += std::string(SEPARATOR);
  out += ABBDCB::run();
  out += std::string(SEPARATOR);
  out += ABBDCC::run();
  out += std::string(SEPARATOR);
  out += ABBDCD::run();
  out += std::string(SEPARATOR);
  out += ABBDCE::run();
  return out;
}

}