#include "AAECC.h"
#include "A/AAECCA.h"
#include "B/AAECCB.h"
#include "C/AAECCC.h"
#include "D/AAECCD.h"
#include "E/AAECCE.h"

namespace AAECC {

std::string run() {
  std::string out("AAECC");
  out += std::string(SEPARATOR);
  out += AAECCA::run();
  out += std::string(SEPARATOR);
  out += AAECCB::run();
  out += std::string(SEPARATOR);
  out += AAECCC::run();
  out += std::string(SEPARATOR);
  out += AAECCD::run();
  out += std::string(SEPARATOR);
  out += AAECCE::run();
  return out;
}

}