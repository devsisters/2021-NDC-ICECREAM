#include "ADDAC.h"
#include "A/ADDACA.h"
#include "B/ADDACB.h"
#include "C/ADDACC.h"
#include "D/ADDACD.h"
#include "E/ADDACE.h"

namespace ADDAC {

std::string run() {
  std::string out("ADDAC");
  out += std::string(SEPARATOR);
  out += ADDACA::run();
  out += std::string(SEPARATOR);
  out += ADDACB::run();
  out += std::string(SEPARATOR);
  out += ADDACC::run();
  out += std::string(SEPARATOR);
  out += ADDACD::run();
  out += std::string(SEPARATOR);
  out += ADDACE::run();
  return out;
}

}