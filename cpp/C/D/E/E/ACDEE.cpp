#include "ACDEE.h"
#include "A/ACDEEA.h"
#include "B/ACDEEB.h"
#include "C/ACDEEC.h"
#include "D/ACDEED.h"
#include "E/ACDEEE.h"

namespace ACDEE {

std::string run() {
  std::string out("ACDEE");
  out += std::string(SEPARATOR);
  out += ACDEEA::run();
  out += std::string(SEPARATOR);
  out += ACDEEB::run();
  out += std::string(SEPARATOR);
  out += ACDEEC::run();
  out += std::string(SEPARATOR);
  out += ACDEED::run();
  out += std::string(SEPARATOR);
  out += ACDEEE::run();
  return out;
}

}