#include "AABEC.h"
#include "A/AABECA.h"
#include "B/AABECB.h"
#include "C/AABECC.h"
#include "D/AABECD.h"
#include "E/AABECE.h"

namespace AABEC {

std::string run() {
  std::string out("AABEC");
  out += std::string(SEPARATOR);
  out += AABECA::run();
  out += std::string(SEPARATOR);
  out += AABECB::run();
  out += std::string(SEPARATOR);
  out += AABECC::run();
  out += std::string(SEPARATOR);
  out += AABECD::run();
  out += std::string(SEPARATOR);
  out += AABECE::run();
  return out;
}

}