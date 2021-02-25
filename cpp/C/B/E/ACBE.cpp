#include "ACBE.h"
#include "A/ACBEA.h"
#include "B/ACBEB.h"
#include "C/ACBEC.h"
#include "D/ACBED.h"
#include "E/ACBEE.h"

namespace ACBE {

std::string run() {
  std::string out("ACBE");
  out += std::string(SEPARATOR);
  out += ACBEA::run();
  out += std::string(SEPARATOR);
  out += ACBEB::run();
  out += std::string(SEPARATOR);
  out += ACBEC::run();
  out += std::string(SEPARATOR);
  out += ACBED::run();
  out += std::string(SEPARATOR);
  out += ACBEE::run();
  return out;
}

}