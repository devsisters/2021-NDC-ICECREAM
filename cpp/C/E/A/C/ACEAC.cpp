#include "ACEAC.h"
#include "A/ACEACA.h"
#include "B/ACEACB.h"
#include "C/ACEACC.h"
#include "D/ACEACD.h"
#include "E/ACEACE.h"

namespace ACEAC {

std::string run() {
  std::string out("ACEAC");
  out += std::string(SEPARATOR);
  out += ACEACA::run();
  out += std::string(SEPARATOR);
  out += ACEACB::run();
  out += std::string(SEPARATOR);
  out += ACEACC::run();
  out += std::string(SEPARATOR);
  out += ACEACD::run();
  out += std::string(SEPARATOR);
  out += ACEACE::run();
  return out;
}

}