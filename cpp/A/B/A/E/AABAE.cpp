#include "AABAE.h"
#include "A/AABAEA.h"
#include "B/AABAEB.h"
#include "C/AABAEC.h"
#include "D/AABAED.h"
#include "E/AABAEE.h"

namespace AABAE {

std::string run() {
  std::string out("AABAE");
  out += std::string(SEPARATOR);
  out += AABAEA::run();
  out += std::string(SEPARATOR);
  out += AABAEB::run();
  out += std::string(SEPARATOR);
  out += AABAEC::run();
  out += std::string(SEPARATOR);
  out += AABAED::run();
  out += std::string(SEPARATOR);
  out += AABAEE::run();
  return out;
}

}