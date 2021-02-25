#include "ADECC.h"
#include "A/ADECCA.h"
#include "B/ADECCB.h"
#include "C/ADECCC.h"
#include "D/ADECCD.h"
#include "E/ADECCE.h"

namespace ADECC {

std::string run() {
  std::string out("ADECC");
  out += std::string(SEPARATOR);
  out += ADECCA::run();
  out += std::string(SEPARATOR);
  out += ADECCB::run();
  out += std::string(SEPARATOR);
  out += ADECCC::run();
  out += std::string(SEPARATOR);
  out += ADECCD::run();
  out += std::string(SEPARATOR);
  out += ADECCE::run();
  return out;
}

}