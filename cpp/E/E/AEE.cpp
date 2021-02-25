#include "AEE.h"
#include "A/AEEA.h"
#include "B/AEEB.h"
#include "C/AEEC.h"
#include "D/AEED.h"
#include "E/AEEE.h"

namespace AEE {

std::string run() {
  std::string out("AEE");
  out += std::string(SEPARATOR);
  out += AEEA::run();
  out += std::string(SEPARATOR);
  out += AEEB::run();
  out += std::string(SEPARATOR);
  out += AEEC::run();
  out += std::string(SEPARATOR);
  out += AEED::run();
  out += std::string(SEPARATOR);
  out += AEEE::run();
  return out;
}

}