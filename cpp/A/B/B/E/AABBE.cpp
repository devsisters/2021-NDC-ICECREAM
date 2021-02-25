#include "AABBE.h"
#include "A/AABBEA.h"
#include "B/AABBEB.h"
#include "C/AABBEC.h"
#include "D/AABBED.h"
#include "E/AABBEE.h"

namespace AABBE {

std::string run() {
  std::string out("AABBE");
  out += std::string(SEPARATOR);
  out += AABBEA::run();
  out += std::string(SEPARATOR);
  out += AABBEB::run();
  out += std::string(SEPARATOR);
  out += AABBEC::run();
  out += std::string(SEPARATOR);
  out += AABBED::run();
  out += std::string(SEPARATOR);
  out += AABBEE::run();
  return out;
}

}