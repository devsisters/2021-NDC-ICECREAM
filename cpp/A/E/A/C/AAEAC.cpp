#include "AAEAC.h"
#include "A/AAEACA.h"
#include "B/AAEACB.h"
#include "C/AAEACC.h"
#include "D/AAEACD.h"
#include "E/AAEACE.h"

namespace AAEAC {

std::string run() {
  std::string out("AAEAC");
  out += std::string(SEPARATOR);
  out += AAEACA::run();
  out += std::string(SEPARATOR);
  out += AAEACB::run();
  out += std::string(SEPARATOR);
  out += AAEACC::run();
  out += std::string(SEPARATOR);
  out += AAEACD::run();
  out += std::string(SEPARATOR);
  out += AAEACE::run();
  return out;
}

}