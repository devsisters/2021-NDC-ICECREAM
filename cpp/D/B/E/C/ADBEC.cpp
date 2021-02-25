#include "ADBEC.h"
#include "A/ADBECA.h"
#include "B/ADBECB.h"
#include "C/ADBECC.h"
#include "D/ADBECD.h"
#include "E/ADBECE.h"

namespace ADBEC {

std::string run() {
  std::string out("ADBEC");
  out += std::string(SEPARATOR);
  out += ADBECA::run();
  out += std::string(SEPARATOR);
  out += ADBECB::run();
  out += std::string(SEPARATOR);
  out += ADBECC::run();
  out += std::string(SEPARATOR);
  out += ADBECD::run();
  out += std::string(SEPARATOR);
  out += ADBECE::run();
  return out;
}

}