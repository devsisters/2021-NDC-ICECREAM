#include "ABBBE.h"
#include "A/ABBBEA.h"
#include "B/ABBBEB.h"
#include "C/ABBBEC.h"
#include "D/ABBBED.h"
#include "E/ABBBEE.h"

namespace ABBBE {

std::string run() {
  std::string out("ABBBE");
  out += std::string(SEPARATOR);
  out += ABBBEA::run();
  out += std::string(SEPARATOR);
  out += ABBBEB::run();
  out += std::string(SEPARATOR);
  out += ABBBEC::run();
  out += std::string(SEPARATOR);
  out += ABBBED::run();
  out += std::string(SEPARATOR);
  out += ABBBEE::run();
  return out;
}

}