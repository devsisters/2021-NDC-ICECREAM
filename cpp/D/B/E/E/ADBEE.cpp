#include "ADBEE.h"
#include "A/ADBEEA.h"
#include "B/ADBEEB.h"
#include "C/ADBEEC.h"
#include "D/ADBEED.h"
#include "E/ADBEEE.h"

namespace ADBEE {

std::string run() {
  std::string out("ADBEE");
  out += std::string(SEPARATOR);
  out += ADBEEA::run();
  out += std::string(SEPARATOR);
  out += ADBEEB::run();
  out += std::string(SEPARATOR);
  out += ADBEEC::run();
  out += std::string(SEPARATOR);
  out += ADBEED::run();
  out += std::string(SEPARATOR);
  out += ADBEEE::run();
  return out;
}

}