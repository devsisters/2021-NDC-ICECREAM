#include "AAEEC.h"
#include "A/AAEECA.h"
#include "B/AAEECB.h"
#include "C/AAEECC.h"
#include "D/AAEECD.h"
#include "E/AAEECE.h"

namespace AAEEC {

std::string run() {
  std::string out("AAEEC");
  out += std::string(SEPARATOR);
  out += AAEECA::run();
  out += std::string(SEPARATOR);
  out += AAEECB::run();
  out += std::string(SEPARATOR);
  out += AAEECC::run();
  out += std::string(SEPARATOR);
  out += AAEECD::run();
  out += std::string(SEPARATOR);
  out += AAEECE::run();
  return out;
}

}