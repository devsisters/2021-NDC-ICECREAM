#include "AABEB.h"
#include "A/AABEBA.h"
#include "B/AABEBB.h"
#include "C/AABEBC.h"
#include "D/AABEBD.h"
#include "E/AABEBE.h"

namespace AABEB {

std::string run() {
  std::string out("AABEB");
  out += std::string(SEPARATOR);
  out += AABEBA::run();
  out += std::string(SEPARATOR);
  out += AABEBB::run();
  out += std::string(SEPARATOR);
  out += AABEBC::run();
  out += std::string(SEPARATOR);
  out += AABEBD::run();
  out += std::string(SEPARATOR);
  out += AABEBE::run();
  return out;
}

}