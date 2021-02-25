#include "ABEE.h"
#include "A/ABEEA.h"
#include "B/ABEEB.h"
#include "C/ABEEC.h"
#include "D/ABEED.h"
#include "E/ABEEE.h"

namespace ABEE {

std::string run() {
  std::string out("ABEE");
  out += std::string(SEPARATOR);
  out += ABEEA::run();
  out += std::string(SEPARATOR);
  out += ABEEB::run();
  out += std::string(SEPARATOR);
  out += ABEEC::run();
  out += std::string(SEPARATOR);
  out += ABEED::run();
  out += std::string(SEPARATOR);
  out += ABEEE::run();
  return out;
}

}