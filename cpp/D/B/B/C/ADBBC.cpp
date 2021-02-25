#include "ADBBC.h"
#include "A/ADBBCA.h"
#include "B/ADBBCB.h"
#include "C/ADBBCC.h"
#include "D/ADBBCD.h"
#include "E/ADBBCE.h"

namespace ADBBC {

std::string run() {
  std::string out("ADBBC");
  out += std::string(SEPARATOR);
  out += ADBBCA::run();
  out += std::string(SEPARATOR);
  out += ADBBCB::run();
  out += std::string(SEPARATOR);
  out += ADBBCC::run();
  out += std::string(SEPARATOR);
  out += ADBBCD::run();
  out += std::string(SEPARATOR);
  out += ADBBCE::run();
  return out;
}

}