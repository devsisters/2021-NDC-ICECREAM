#include "AECC.h"
#include "A/AECCA.h"
#include "B/AECCB.h"
#include "C/AECCC.h"
#include "D/AECCD.h"
#include "E/AECCE.h"

namespace AECC {

std::string run() {
  std::string out("AECC");
  out += std::string(SEPARATOR);
  out += AECCA::run();
  out += std::string(SEPARATOR);
  out += AECCB::run();
  out += std::string(SEPARATOR);
  out += AECCC::run();
  out += std::string(SEPARATOR);
  out += AECCD::run();
  out += std::string(SEPARATOR);
  out += AECCE::run();
  return out;
}

}