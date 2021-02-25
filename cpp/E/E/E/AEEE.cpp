#include "AEEE.h"
#include "A/AEEEA.h"
#include "B/AEEEB.h"
#include "C/AEEEC.h"
#include "D/AEEED.h"
#include "E/AEEEE.h"

namespace AEEE {

std::string run() {
  std::string out("AEEE");
  out += std::string(SEPARATOR);
  out += AEEEA::run();
  out += std::string(SEPARATOR);
  out += AEEEB::run();
  out += std::string(SEPARATOR);
  out += AEEEC::run();
  out += std::string(SEPARATOR);
  out += AEEED::run();
  out += std::string(SEPARATOR);
  out += AEEEE::run();
  return out;
}

}