#include "ABDEE.h"
#include "A/ABDEEA.h"
#include "B/ABDEEB.h"
#include "C/ABDEEC.h"
#include "D/ABDEED.h"
#include "E/ABDEEE.h"

namespace ABDEE {

std::string run() {
  std::string out("ABDEE");
  out += std::string(SEPARATOR);
  out += ABDEEA::run();
  out += std::string(SEPARATOR);
  out += ABDEEB::run();
  out += std::string(SEPARATOR);
  out += ABDEEC::run();
  out += std::string(SEPARATOR);
  out += ABDEED::run();
  out += std::string(SEPARATOR);
  out += ABDEEE::run();
  return out;
}

}