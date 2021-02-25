#include "AEACC.h"
#include "A/AEACCA.h"
#include "B/AEACCB.h"
#include "C/AEACCC.h"
#include "D/AEACCD.h"
#include "E/AEACCE.h"

namespace AEACC {

std::string run() {
  std::string out("AEACC");
  out += std::string(SEPARATOR);
  out += AEACCA::run();
  out += std::string(SEPARATOR);
  out += AEACCB::run();
  out += std::string(SEPARATOR);
  out += AEACCC::run();
  out += std::string(SEPARATOR);
  out += AEACCD::run();
  out += std::string(SEPARATOR);
  out += AEACCE::run();
  return out;
}

}