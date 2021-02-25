#include "ABDAC.h"
#include "A/ABDACA.h"
#include "B/ABDACB.h"
#include "C/ABDACC.h"
#include "D/ABDACD.h"
#include "E/ABDACE.h"

namespace ABDAC {

std::string run() {
  std::string out("ABDAC");
  out += std::string(SEPARATOR);
  out += ABDACA::run();
  out += std::string(SEPARATOR);
  out += ABDACB::run();
  out += std::string(SEPARATOR);
  out += ABDACC::run();
  out += std::string(SEPARATOR);
  out += ABDACD::run();
  out += std::string(SEPARATOR);
  out += ABDACE::run();
  return out;
}

}