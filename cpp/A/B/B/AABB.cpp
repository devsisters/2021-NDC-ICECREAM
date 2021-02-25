#include "AABB.h"
#include "A/AABBA.h"
#include "B/AABBB.h"
#include "C/AABBC.h"
#include "D/AABBD.h"
#include "E/AABBE.h"

namespace AABB {

std::string run() {
  std::string out("AABB");
  out += std::string(SEPARATOR);
  out += AABBA::run();
  out += std::string(SEPARATOR);
  out += AABBB::run();
  out += std::string(SEPARATOR);
  out += AABBC::run();
  out += std::string(SEPARATOR);
  out += AABBD::run();
  out += std::string(SEPARATOR);
  out += AABBE::run();
  return out;
}

}