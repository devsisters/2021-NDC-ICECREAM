#include "AEECC.h"
#include "A/AEECCA.h"
#include "B/AEECCB.h"
#include "C/AEECCC.h"
#include "D/AEECCD.h"
#include "E/AEECCE.h"

namespace AEECC {

std::string run() {
  std::string out("AEECC");
  out += std::string(SEPARATOR);
  out += AEECCA::run();
  out += std::string(SEPARATOR);
  out += AEECCB::run();
  out += std::string(SEPARATOR);
  out += AEECCC::run();
  out += std::string(SEPARATOR);
  out += AEECCD::run();
  out += std::string(SEPARATOR);
  out += AEECCE::run();
  return out;
}

}