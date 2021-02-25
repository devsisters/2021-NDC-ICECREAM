#include "AACAC.h"
#include "A/AACACA.h"
#include "B/AACACB.h"
#include "C/AACACC.h"
#include "D/AACACD.h"
#include "E/AACACE.h"

namespace AACAC {

std::string run() {
  std::string out("AACAC");
  out += std::string(SEPARATOR);
  out += AACACA::run();
  out += std::string(SEPARATOR);
  out += AACACB::run();
  out += std::string(SEPARATOR);
  out += AACACC::run();
  out += std::string(SEPARATOR);
  out += AACACD::run();
  out += std::string(SEPARATOR);
  out += AACACE::run();
  return out;
}

}