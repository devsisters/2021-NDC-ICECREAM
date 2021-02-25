#include "AEBEE.h"
#include "A/AEBEEA.h"
#include "B/AEBEEB.h"
#include "C/AEBEEC.h"
#include "D/AEBEED.h"
#include "E/AEBEEE.h"

namespace AEBEE {

std::string run() {
  std::string out("AEBEE");
  out += std::string(SEPARATOR);
  out += AEBEEA::run();
  out += std::string(SEPARATOR);
  out += AEBEEB::run();
  out += std::string(SEPARATOR);
  out += AEBEEC::run();
  out += std::string(SEPARATOR);
  out += AEBEED::run();
  out += std::string(SEPARATOR);
  out += AEBEEE::run();
  return out;
}

}