#include "ADBBE.h"
#include "A/ADBBEA.h"
#include "B/ADBBEB.h"
#include "C/ADBBEC.h"
#include "D/ADBBED.h"
#include "E/ADBBEE.h"

namespace ADBBE {

std::string run() {
  std::string out("ADBBE");
  out += std::string(SEPARATOR);
  out += ADBBEA::run();
  out += std::string(SEPARATOR);
  out += ADBBEB::run();
  out += std::string(SEPARATOR);
  out += ADBBEC::run();
  out += std::string(SEPARATOR);
  out += ADBBED::run();
  out += std::string(SEPARATOR);
  out += ADBBEE::run();
  return out;
}

}