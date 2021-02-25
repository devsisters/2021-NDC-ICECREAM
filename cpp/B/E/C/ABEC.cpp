#include "ABEC.h"
#include "A/ABECA.h"
#include "B/ABECB.h"
#include "C/ABECC.h"
#include "D/ABECD.h"
#include "E/ABECE.h"

namespace ABEC {

std::string run() {
  std::string out("ABEC");
  out += std::string(SEPARATOR);
  out += ABECA::run();
  out += std::string(SEPARATOR);
  out += ABECB::run();
  out += std::string(SEPARATOR);
  out += ABECC::run();
  out += std::string(SEPARATOR);
  out += ABECD::run();
  out += std::string(SEPARATOR);
  out += ABECE::run();
  return out;
}

}