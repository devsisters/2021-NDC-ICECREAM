#include "ACCAC.h"
#include "A/ACCACA.h"
#include "B/ACCACB.h"
#include "C/ACCACC.h"
#include "D/ACCACD.h"
#include "E/ACCACE.h"

namespace ACCAC {

std::string run() {
  std::string out("ACCAC");
  out += std::string(SEPARATOR);
  out += ACCACA::run();
  out += std::string(SEPARATOR);
  out += ACCACB::run();
  out += std::string(SEPARATOR);
  out += ACCACC::run();
  out += std::string(SEPARATOR);
  out += ACCACD::run();
  out += std::string(SEPARATOR);
  out += ACCACE::run();
  return out;
}

}