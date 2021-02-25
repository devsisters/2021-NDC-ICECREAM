#include "AEBBE.h"
#include "A/AEBBEA.h"
#include "B/AEBBEB.h"
#include "C/AEBBEC.h"
#include "D/AEBBED.h"
#include "E/AEBBEE.h"

namespace AEBBE {

std::string run() {
  std::string out("AEBBE");
  out += std::string(SEPARATOR);
  out += AEBBEA::run();
  out += std::string(SEPARATOR);
  out += AEBBEB::run();
  out += std::string(SEPARATOR);
  out += AEBBEC::run();
  out += std::string(SEPARATOR);
  out += AEBBED::run();
  out += std::string(SEPARATOR);
  out += AEBBEE::run();
  return out;
}

}