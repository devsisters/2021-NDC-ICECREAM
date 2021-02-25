#include "ABBEE.h"
#include "A/ABBEEA.h"
#include "B/ABBEEB.h"
#include "C/ABBEEC.h"
#include "D/ABBEED.h"
#include "E/ABBEEE.h"

namespace ABBEE {

std::string run() {
  std::string out("ABBEE");
  out += std::string(SEPARATOR);
  out += ABBEEA::run();
  out += std::string(SEPARATOR);
  out += ABBEEB::run();
  out += std::string(SEPARATOR);
  out += ABBEEC::run();
  out += std::string(SEPARATOR);
  out += ABBEED::run();
  out += std::string(SEPARATOR);
  out += ABBEEE::run();
  return out;
}

}