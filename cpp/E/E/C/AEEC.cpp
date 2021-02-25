#include "AEEC.h"
#include "A/AEECA.h"
#include "B/AEECB.h"
#include "C/AEECC.h"
#include "D/AEECD.h"
#include "E/AEECE.h"

namespace AEEC {

std::string run() {
  std::string out("AEEC");
  out += std::string(SEPARATOR);
  out += AEECA::run();
  out += std::string(SEPARATOR);
  out += AEECB::run();
  out += std::string(SEPARATOR);
  out += AEECC::run();
  out += std::string(SEPARATOR);
  out += AEECD::run();
  out += std::string(SEPARATOR);
  out += AEECE::run();
  return out;
}

}