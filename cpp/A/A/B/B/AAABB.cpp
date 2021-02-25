#include "AAABB.h"
#include "A/AAABBA.h"
#include "B/AAABBB.h"
#include "C/AAABBC.h"
#include "D/AAABBD.h"
#include "E/AAABBE.h"

namespace AAABB {

std::string run() {
  std::string out("AAABB");
  out += std::string(SEPARATOR);
  out += AAABBA::run();
  out += std::string(SEPARATOR);
  out += AAABBB::run();
  out += std::string(SEPARATOR);
  out += AAABBC::run();
  out += std::string(SEPARATOR);
  out += AAABBD::run();
  out += std::string(SEPARATOR);
  out += AAABBE::run();
  return out;
}

}