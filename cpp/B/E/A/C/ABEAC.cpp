#include "ABEAC.h"
#include "A/ABEACA.h"
#include "B/ABEACB.h"
#include "C/ABEACC.h"
#include "D/ABEACD.h"
#include "E/ABEACE.h"

namespace ABEAC {

std::string run() {
  std::string out("ABEAC");
  out += std::string(SEPARATOR);
  out += ABEACA::run();
  out += std::string(SEPARATOR);
  out += ABEACB::run();
  out += std::string(SEPARATOR);
  out += ABEACC::run();
  out += std::string(SEPARATOR);
  out += ABEACD::run();
  out += std::string(SEPARATOR);
  out += ABEACE::run();
  return out;
}

}