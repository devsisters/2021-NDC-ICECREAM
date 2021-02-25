#include "AAEC.h"
#include "A/AAECA.h"
#include "B/AAECB.h"
#include "C/AAECC.h"
#include "D/AAECD.h"
#include "E/AAECE.h"

namespace AAEC {

std::string run() {
  std::string out("AAEC");
  out += std::string(SEPARATOR);
  out += AAECA::run();
  out += std::string(SEPARATOR);
  out += AAECB::run();
  out += std::string(SEPARATOR);
  out += AAECC::run();
  out += std::string(SEPARATOR);
  out += AAECD::run();
  out += std::string(SEPARATOR);
  out += AAECE::run();
  return out;
}

}