#include "AEEEE.h"
#include "A/AEEEEA.h"
#include "B/AEEEEB.h"
#include "C/AEEEEC.h"
#include "D/AEEEED.h"
#include "E/AEEEEE.h"

namespace AEEEE {

std::string run() {
  std::string out("AEEEE");
  out += std::string(SEPARATOR);
  out += AEEEEA::run();
  out += std::string(SEPARATOR);
  out += AEEEEB::run();
  out += std::string(SEPARATOR);
  out += AEEEEC::run();
  out += std::string(SEPARATOR);
  out += AEEEED::run();
  out += std::string(SEPARATOR);
  out += AEEEEE::run();
  return out;
}

}