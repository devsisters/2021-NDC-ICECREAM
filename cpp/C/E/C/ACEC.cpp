#include "ACEC.h"
#include "A/ACECA.h"
#include "B/ACECB.h"
#include "C/ACECC.h"
#include "D/ACECD.h"
#include "E/ACECE.h"

namespace ACEC {

std::string run() {
  std::string out("ACEC");
  out += std::string(SEPARATOR);
  out += ACECA::run();
  out += std::string(SEPARATOR);
  out += ACECB::run();
  out += std::string(SEPARATOR);
  out += ACECC::run();
  out += std::string(SEPARATOR);
  out += ACECD::run();
  out += std::string(SEPARATOR);
  out += ACECE::run();
  return out;
}

}