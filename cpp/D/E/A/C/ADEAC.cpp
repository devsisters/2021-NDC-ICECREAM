#include "ADEAC.h"
#include "A/ADEACA.h"
#include "B/ADEACB.h"
#include "C/ADEACC.h"
#include "D/ADEACD.h"
#include "E/ADEACE.h"

namespace ADEAC {

std::string run() {
  std::string out("ADEAC");
  out += std::string(SEPARATOR);
  out += ADEACA::run();
  out += std::string(SEPARATOR);
  out += ADEACB::run();
  out += std::string(SEPARATOR);
  out += ADEACC::run();
  out += std::string(SEPARATOR);
  out += ADEACD::run();
  out += std::string(SEPARATOR);
  out += ADEACE::run();
  return out;
}

}