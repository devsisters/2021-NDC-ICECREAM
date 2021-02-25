#include "AAEEE.h"
#include "A/AAEEEA.h"
#include "B/AAEEEB.h"
#include "C/AAEEEC.h"
#include "D/AAEEED.h"
#include "E/AAEEEE.h"

namespace AAEEE {

std::string run() {
  std::string out("AAEEE");
  out += std::string(SEPARATOR);
  out += AAEEEA::run();
  out += std::string(SEPARATOR);
  out += AAEEEB::run();
  out += std::string(SEPARATOR);
  out += AAEEEC::run();
  out += std::string(SEPARATOR);
  out += AAEEED::run();
  out += std::string(SEPARATOR);
  out += AAEEEE::run();
  return out;
}

}