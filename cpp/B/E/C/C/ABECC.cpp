#include "ABECC.h"
#include "A/ABECCA.h"
#include "B/ABECCB.h"
#include "C/ABECCC.h"
#include "D/ABECCD.h"
#include "E/ABECCE.h"

namespace ABECC {

std::string run() {
  std::string out("ABECC");
  out += std::string(SEPARATOR);
  out += ABECCA::run();
  out += std::string(SEPARATOR);
  out += ABECCB::run();
  out += std::string(SEPARATOR);
  out += ABECCC::run();
  out += std::string(SEPARATOR);
  out += ABECCD::run();
  out += std::string(SEPARATOR);
  out += ABECCE::run();
  return out;
}

}