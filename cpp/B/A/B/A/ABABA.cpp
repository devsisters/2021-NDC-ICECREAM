#include "ABABA.h"
#include "A/ABABAA.h"
#include "B/ABABAB.h"
#include "C/ABABAC.h"
#include "D/ABABAD.h"
#include "E/ABABAE.h"

namespace ABABA {

std::string run() {
  std::string out("ABABA");
  out += std::string(SEPARATOR);
  out += ABABAA::run();
  out += std::string(SEPARATOR);
  out += ABABAB::run();
  out += std::string(SEPARATOR);
  out += ABABAC::run();
  out += std::string(SEPARATOR);
  out += ABABAD::run();
  out += std::string(SEPARATOR);
  out += ABABAE::run();
  return out;
}

}