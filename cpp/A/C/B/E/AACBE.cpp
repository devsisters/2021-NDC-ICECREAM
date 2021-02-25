#include "AACBE.h"
#include "A/AACBEA.h"
#include "B/AACBEB.h"
#include "C/AACBEC.h"
#include "D/AACBED.h"
#include "E/AACBEE.h"

namespace AACBE {

std::string run() {
  std::string out("AACBE");
  out += std::string(SEPARATOR);
  out += AACBEA::run();
  out += std::string(SEPARATOR);
  out += AACBEB::run();
  out += std::string(SEPARATOR);
  out += AACBEC::run();
  out += std::string(SEPARATOR);
  out += AACBED::run();
  out += std::string(SEPARATOR);
  out += AACBEE::run();
  return out;
}

}