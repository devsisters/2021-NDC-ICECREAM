#include "ACACC.h"
#include "A/ACACCA.h"
#include "B/ACACCB.h"
#include "C/ACACCC.h"
#include "D/ACACCD.h"
#include "E/ACACCE.h"

namespace ACACC {

std::string run() {
  std::string out("ACACC");
  out += std::string(SEPARATOR);
  out += ACACCA::run();
  out += std::string(SEPARATOR);
  out += ACACCB::run();
  out += std::string(SEPARATOR);
  out += ACACCC::run();
  out += std::string(SEPARATOR);
  out += ACACCD::run();
  out += std::string(SEPARATOR);
  out += ACACCE::run();
  return out;
}

}