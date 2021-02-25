#include "ADACC.h"
#include "A/ADACCA.h"
#include "B/ADACCB.h"
#include "C/ADACCC.h"
#include "D/ADACCD.h"
#include "E/ADACCE.h"

namespace ADACC {

std::string run() {
  std::string out("ADACC");
  out += std::string(SEPARATOR);
  out += ADACCA::run();
  out += std::string(SEPARATOR);
  out += ADACCB::run();
  out += std::string(SEPARATOR);
  out += ADACCC::run();
  out += std::string(SEPARATOR);
  out += ADACCD::run();
  out += std::string(SEPARATOR);
  out += ADACCE::run();
  return out;
}

}