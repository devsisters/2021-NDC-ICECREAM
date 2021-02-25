#include "AADAC.h"
#include "A/AADACA.h"
#include "B/AADACB.h"
#include "C/AADACC.h"
#include "D/AADACD.h"
#include "E/AADACE.h"

namespace AADAC {

std::string run() {
  std::string out("AADAC");
  out += std::string(SEPARATOR);
  out += AADACA::run();
  out += std::string(SEPARATOR);
  out += AADACB::run();
  out += std::string(SEPARATOR);
  out += AADACC::run();
  out += std::string(SEPARATOR);
  out += AADACD::run();
  out += std::string(SEPARATOR);
  out += AADACE::run();
  return out;
}

}