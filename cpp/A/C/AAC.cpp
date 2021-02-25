#include "AAC.h"
#include "A/AACA.h"
#include "B/AACB.h"
#include "C/AACC.h"
#include "D/AACD.h"
#include "E/AACE.h"

namespace AAC {

std::string run() {
  std::string out("AAC");
  out += std::string(SEPARATOR);
  out += AACA::run();
  out += std::string(SEPARATOR);
  out += AACB::run();
  out += std::string(SEPARATOR);
  out += AACC::run();
  out += std::string(SEPARATOR);
  out += AACD::run();
  out += std::string(SEPARATOR);
  out += AACE::run();
  return out;
}

}