#include "ABE.h"
#include "A/ABEA.h"
#include "B/ABEB.h"
#include "C/ABEC.h"
#include "D/ABED.h"
#include "E/ABEE.h"

namespace ABE {

std::string run() {
  std::string out("ABE");
  out += std::string(SEPARATOR);
  out += ABEA::run();
  out += std::string(SEPARATOR);
  out += ABEB::run();
  out += std::string(SEPARATOR);
  out += ABEC::run();
  out += std::string(SEPARATOR);
  out += ABED::run();
  out += std::string(SEPARATOR);
  out += ABEE::run();
  return out;
}

}