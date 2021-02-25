#include "ADBAC.h"
#include "A/ADBACA.h"
#include "B/ADBACB.h"
#include "C/ADBACC.h"
#include "D/ADBACD.h"
#include "E/ADBACE.h"

namespace ADBAC {

std::string run() {
  std::string out("ADBAC");
  out += std::string(SEPARATOR);
  out += ADBACA::run();
  out += std::string(SEPARATOR);
  out += ADBACB::run();
  out += std::string(SEPARATOR);
  out += ADBACC::run();
  out += std::string(SEPARATOR);
  out += ADBACD::run();
  out += std::string(SEPARATOR);
  out += ADBACE::run();
  return out;
}

}