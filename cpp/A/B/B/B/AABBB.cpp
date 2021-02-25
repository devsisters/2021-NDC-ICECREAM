#include "AABBB.h"
#include "A/AABBBA.h"
#include "B/AABBBB.h"
#include "C/AABBBC.h"
#include "D/AABBBD.h"
#include "E/AABBBE.h"

namespace AABBB {

std::string run() {
  std::string out("AABBB");
  out += std::string(SEPARATOR);
  out += AABBBA::run();
  out += std::string(SEPARATOR);
  out += AABBBB::run();
  out += std::string(SEPARATOR);
  out += AABBBC::run();
  out += std::string(SEPARATOR);
  out += AABBBD::run();
  out += std::string(SEPARATOR);
  out += AABBBE::run();
  return out;
}

}