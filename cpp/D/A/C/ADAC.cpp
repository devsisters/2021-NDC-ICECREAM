#include "ADAC.h"
#include "A/ADACA.h"
#include "B/ADACB.h"
#include "C/ADACC.h"
#include "D/ADACD.h"
#include "E/ADACE.h"

namespace ADAC {

std::string run() {
  std::string out("ADAC");
  out += std::string(SEPARATOR);
  out += ADACA::run();
  out += std::string(SEPARATOR);
  out += ADACB::run();
  out += std::string(SEPARATOR);
  out += ADACC::run();
  out += std::string(SEPARATOR);
  out += ADACD::run();
  out += std::string(SEPARATOR);
  out += ADACE::run();
  return out;
}

}