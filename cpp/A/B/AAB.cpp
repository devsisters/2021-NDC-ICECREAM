#include "AAB.h"
#include "A/AABA.h"
#include "B/AABB.h"
#include "C/AABC.h"
#include "D/AABD.h"
#include "E/AABE.h"

namespace AAB {

std::string run() {
  std::string out("AAB");
  out += std::string(SEPARATOR);
  out += AABA::run();
  out += std::string(SEPARATOR);
  out += AABB::run();
  out += std::string(SEPARATOR);
  out += AABC::run();
  out += std::string(SEPARATOR);
  out += AABD::run();
  out += std::string(SEPARATOR);
  out += AABE::run();
  return out;
}

}