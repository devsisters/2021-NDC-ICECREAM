#include "ACAC.h"
#include "A/ACACA.h"
#include "B/ACACB.h"
#include "C/ACACC.h"
#include "D/ACACD.h"
#include "E/ACACE.h"

namespace ACAC {

std::string run() {
  std::string out("ACAC");
  out += std::string(SEPARATOR);
  out += ACACA::run();
  out += std::string(SEPARATOR);
  out += ACACB::run();
  out += std::string(SEPARATOR);
  out += ACACC::run();
  out += std::string(SEPARATOR);
  out += ACACD::run();
  out += std::string(SEPARATOR);
  out += ACACE::run();
  return out;
}

}