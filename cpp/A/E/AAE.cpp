#include "AAE.h"
#include "A/AAEA.h"
#include "B/AAEB.h"
#include "C/AAEC.h"
#include "D/AAED.h"
#include "E/AAEE.h"

namespace AAE {

std::string run() {
  std::string out("AAE");
  out += std::string(SEPARATOR);
  out += AAEA::run();
  out += std::string(SEPARATOR);
  out += AAEB::run();
  out += std::string(SEPARATOR);
  out += AAEC::run();
  out += std::string(SEPARATOR);
  out += AAED::run();
  out += std::string(SEPARATOR);
  out += AAEE::run();
  return out;
}

}