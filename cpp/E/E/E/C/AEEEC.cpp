#include "AEEEC.h"
#include "A/AEEECA.h"
#include "B/AEEECB.h"
#include "C/AEEECC.h"
#include "D/AEEECD.h"
#include "E/AEEECE.h"

namespace AEEEC {

std::string run() {
  std::string out("AEEEC");
  out += std::string(SEPARATOR);
  out += AEEECA::run();
  out += std::string(SEPARATOR);
  out += AEEECB::run();
  out += std::string(SEPARATOR);
  out += AEEECC::run();
  out += std::string(SEPARATOR);
  out += AEEECD::run();
  out += std::string(SEPARATOR);
  out += AEEECE::run();
  return out;
}

}