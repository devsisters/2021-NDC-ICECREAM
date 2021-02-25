#include "AEAC.h"
#include "A/AEACA.h"
#include "B/AEACB.h"
#include "C/AEACC.h"
#include "D/AEACD.h"
#include "E/AEACE.h"

namespace AEAC {

std::string run() {
  std::string out("AEAC");
  out += std::string(SEPARATOR);
  out += AEACA::run();
  out += std::string(SEPARATOR);
  out += AEACB::run();
  out += std::string(SEPARATOR);
  out += AEACC::run();
  out += std::string(SEPARATOR);
  out += AEACD::run();
  out += std::string(SEPARATOR);
  out += AEACE::run();
  return out;
}

}