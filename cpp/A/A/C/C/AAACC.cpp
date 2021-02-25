#include "AAACC.h"
#include "A/AAACCA.h"
#include "B/AAACCB.h"
#include "C/AAACCC.h"
#include "D/AAACCD.h"
#include "E/AAACCE.h"

namespace AAACC {

std::string run() {
  std::string out("AAACC");
  out += std::string(SEPARATOR);
  out += AAACCA::run();
  out += std::string(SEPARATOR);
  out += AAACCB::run();
  out += std::string(SEPARATOR);
  out += AAACCC::run();
  out += std::string(SEPARATOR);
  out += AAACCD::run();
  out += std::string(SEPARATOR);
  out += AAACCE::run();
  return out;
}

}