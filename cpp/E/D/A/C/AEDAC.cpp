#include "AEDAC.h"
#include "A/AEDACA.h"
#include "B/AEDACB.h"
#include "C/AEDACC.h"
#include "D/AEDACD.h"
#include "E/AEDACE.h"

namespace AEDAC {

std::string run() {
  std::string out("AEDAC");
  out += std::string(SEPARATOR);
  out += AEDACA::run();
  out += std::string(SEPARATOR);
  out += AEDACB::run();
  out += std::string(SEPARATOR);
  out += AEDACC::run();
  out += std::string(SEPARATOR);
  out += AEDACD::run();
  out += std::string(SEPARATOR);
  out += AEDACE::run();
  return out;
}

}