#include "ABCBE.h"
#include "A/ABCBEA.h"
#include "B/ABCBEB.h"
#include "C/ABCBEC.h"
#include "D/ABCBED.h"
#include "E/ABCBEE.h"

namespace ABCBE {

std::string run() {
  std::string out("ABCBE");
  out += std::string(SEPARATOR);
  out += ABCBEA::run();
  out += std::string(SEPARATOR);
  out += ABCBEB::run();
  out += std::string(SEPARATOR);
  out += ABCBEC::run();
  out += std::string(SEPARATOR);
  out += ABCBED::run();
  out += std::string(SEPARATOR);
  out += ABCBEE::run();
  return out;
}

}