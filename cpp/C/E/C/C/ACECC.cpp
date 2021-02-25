#include "ACECC.h"
#include "A/ACECCA.h"
#include "B/ACECCB.h"
#include "C/ACECCC.h"
#include "D/ACECCD.h"
#include "E/ACECCE.h"

namespace ACECC {

std::string run() {
  std::string out("ACECC");
  out += std::string(SEPARATOR);
  out += ACECCA::run();
  out += std::string(SEPARATOR);
  out += ACECCB::run();
  out += std::string(SEPARATOR);
  out += ACECCC::run();
  out += std::string(SEPARATOR);
  out += ACECCD::run();
  out += std::string(SEPARATOR);
  out += ACECCE::run();
  return out;
}

}