#include "AEABC.h"
#include "A/AEABCA.h"
#include "B/AEABCB.h"
#include "C/AEABCC.h"
#include "D/AEABCD.h"
#include "E/AEABCE.h"

namespace AEABC {

std::string run() {
  std::string out("AEABC");
  out += std::string(SEPARATOR);
  out += AEABCA::run();
  out += std::string(SEPARATOR);
  out += AEABCB::run();
  out += std::string(SEPARATOR);
  out += AEABCC::run();
  out += std::string(SEPARATOR);
  out += AEABCD::run();
  out += std::string(SEPARATOR);
  out += AEABCE::run();
  return out;
}

}