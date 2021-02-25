#include "AABAA.h"
#include "A/AABAAA.h"
#include "B/AABAAB.h"
#include "C/AABAAC.h"
#include "D/AABAAD.h"
#include "E/AABAAE.h"

namespace AABAA {

std::string run() {
  std::string out("AABAA");
  out += std::string(SEPARATOR);
  out += AABAAA::run();
  out += std::string(SEPARATOR);
  out += AABAAB::run();
  out += std::string(SEPARATOR);
  out += AABAAC::run();
  out += std::string(SEPARATOR);
  out += AABAAD::run();
  out += std::string(SEPARATOR);
  out += AABAAE::run();
  return out;
}

}