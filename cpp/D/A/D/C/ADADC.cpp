#include "ADADC.h"
#include "A/ADADCA.h"
#include "B/ADADCB.h"
#include "C/ADADCC.h"
#include "D/ADADCD.h"
#include "E/ADADCE.h"

namespace ADADC {

std::string run() {
  std::string out("ADADC");
  out += std::string(SEPARATOR);
  out += ADADCA::run();
  out += std::string(SEPARATOR);
  out += ADADCB::run();
  out += std::string(SEPARATOR);
  out += ADADCC::run();
  out += std::string(SEPARATOR);
  out += ADADCD::run();
  out += std::string(SEPARATOR);
  out += ADADCE::run();
  return out;
}

}