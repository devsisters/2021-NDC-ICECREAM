#include "AECBE.h"
#include "A/AECBEA.h"
#include "B/AECBEB.h"
#include "C/AECBEC.h"
#include "D/AECBED.h"
#include "E/AECBEE.h"

namespace AECBE {

std::string run() {
  std::string out("AECBE");
  out += std::string(SEPARATOR);
  out += AECBEA::run();
  out += std::string(SEPARATOR);
  out += AECBEB::run();
  out += std::string(SEPARATOR);
  out += AECBEC::run();
  out += std::string(SEPARATOR);
  out += AECBED::run();
  out += std::string(SEPARATOR);
  out += AECBEE::run();
  return out;
}

}