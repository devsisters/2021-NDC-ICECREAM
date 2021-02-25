#include "ACBEC.h"
#include "A/ACBECA.h"
#include "B/ACBECB.h"
#include "C/ACBECC.h"
#include "D/ACBECD.h"
#include "E/ACBECE.h"

namespace ACBEC {

std::string run() {
  std::string out("ACBEC");
  out += std::string(SEPARATOR);
  out += ACBECA::run();
  out += std::string(SEPARATOR);
  out += ACBECB::run();
  out += std::string(SEPARATOR);
  out += ACBECC::run();
  out += std::string(SEPARATOR);
  out += ACBECD::run();
  out += std::string(SEPARATOR);
  out += ACBECE::run();
  return out;
}

}