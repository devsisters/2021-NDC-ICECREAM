#include "ABACC.h"
#include "A/ABACCA.h"
#include "B/ABACCB.h"
#include "C/ABACCC.h"
#include "D/ABACCD.h"
#include "E/ABACCE.h"

namespace ABACC {

std::string run() {
  std::string out("ABACC");
  out += std::string(SEPARATOR);
  out += ABACCA::run();
  out += std::string(SEPARATOR);
  out += ABACCB::run();
  out += std::string(SEPARATOR);
  out += ABACCC::run();
  out += std::string(SEPARATOR);
  out += ABACCD::run();
  out += std::string(SEPARATOR);
  out += ABACCE::run();
  return out;
}

}