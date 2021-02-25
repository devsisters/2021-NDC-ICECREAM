#include "AEDEE.h"
#include "A/AEDEEA.h"
#include "B/AEDEEB.h"
#include "C/AEDEEC.h"
#include "D/AEDEED.h"
#include "E/AEDEEE.h"

namespace AEDEE {

std::string run() {
  std::string out("AEDEE");
  out += std::string(SEPARATOR);
  out += AEDEEA::run();
  out += std::string(SEPARATOR);
  out += AEDEEB::run();
  out += std::string(SEPARATOR);
  out += AEDEEC::run();
  out += std::string(SEPARATOR);
  out += AEDEED::run();
  out += std::string(SEPARATOR);
  out += AEDEEE::run();
  return out;
}

}