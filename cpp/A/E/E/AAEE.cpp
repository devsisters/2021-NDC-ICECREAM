#include "AAEE.h"
#include "A/AAEEA.h"
#include "B/AAEEB.h"
#include "C/AAEEC.h"
#include "D/AAEED.h"
#include "E/AAEEE.h"

namespace AAEE {

std::string run() {
  std::string out("AAEE");
  out += std::string(SEPARATOR);
  out += AAEEA::run();
  out += std::string(SEPARATOR);
  out += AAEEB::run();
  out += std::string(SEPARATOR);
  out += AAEEC::run();
  out += std::string(SEPARATOR);
  out += AAEED::run();
  out += std::string(SEPARATOR);
  out += AAEEE::run();
  return out;
}

}