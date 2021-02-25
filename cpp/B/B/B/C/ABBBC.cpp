#include "ABBBC.h"
#include "A/ABBBCA.h"
#include "B/ABBBCB.h"
#include "C/ABBBCC.h"
#include "D/ABBBCD.h"
#include "E/ABBBCE.h"

namespace ABBBC {

std::string run() {
  std::string out("ABBBC");
  out += std::string(SEPARATOR);
  out += ABBBCA::run();
  out += std::string(SEPARATOR);
  out += ABBBCB::run();
  out += std::string(SEPARATOR);
  out += ABBBCC::run();
  out += std::string(SEPARATOR);
  out += ABBBCD::run();
  out += std::string(SEPARATOR);
  out += ABBBCE::run();
  return out;
}

}