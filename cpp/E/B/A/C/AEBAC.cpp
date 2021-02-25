#include "AEBAC.h"
#include "A/AEBACA.h"
#include "B/AEBACB.h"
#include "C/AEBACC.h"
#include "D/AEBACD.h"
#include "E/AEBACE.h"

namespace AEBAC {

std::string run() {
  std::string out("AEBAC");
  out += std::string(SEPARATOR);
  out += AEBACA::run();
  out += std::string(SEPARATOR);
  out += AEBACB::run();
  out += std::string(SEPARATOR);
  out += AEBACC::run();
  out += std::string(SEPARATOR);
  out += AEBACD::run();
  out += std::string(SEPARATOR);
  out += AEBACE::run();
  return out;
}

}