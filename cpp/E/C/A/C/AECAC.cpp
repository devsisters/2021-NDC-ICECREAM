#include "AECAC.h"
#include "A/AECACA.h"
#include "B/AECACB.h"
#include "C/AECACC.h"
#include "D/AECACD.h"
#include "E/AECACE.h"

namespace AECAC {

std::string run() {
  std::string out("AECAC");
  out += std::string(SEPARATOR);
  out += AECACA::run();
  out += std::string(SEPARATOR);
  out += AECACB::run();
  out += std::string(SEPARATOR);
  out += AECACC::run();
  out += std::string(SEPARATOR);
  out += AECACD::run();
  out += std::string(SEPARATOR);
  out += AECACE::run();
  return out;
}

}