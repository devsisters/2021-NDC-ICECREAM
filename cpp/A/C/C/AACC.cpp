#include "AACC.h"
#include "A/AACCA.h"
#include "B/AACCB.h"
#include "C/AACCC.h"
#include "D/AACCD.h"
#include "E/AACCE.h"

namespace AACC {

std::string run() {
  std::string out("AACC");
  out += std::string(SEPARATOR);
  out += AACCA::run();
  out += std::string(SEPARATOR);
  out += AACCB::run();
  out += std::string(SEPARATOR);
  out += AACCC::run();
  out += std::string(SEPARATOR);
  out += AACCD::run();
  out += std::string(SEPARATOR);
  out += AACCE::run();
  return out;
}

}