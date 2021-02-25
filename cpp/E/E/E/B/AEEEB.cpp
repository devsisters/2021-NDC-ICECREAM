#include "AEEEB.h"
#include "A/AEEEBA.h"
#include "B/AEEEBB.h"
#include "C/AEEEBC.h"
#include "D/AEEEBD.h"
#include "E/AEEEBE.h"

namespace AEEEB {

std::string run() {
  std::string out("AEEEB");
  out += std::string(SEPARATOR);
  out += AEEEBA::run();
  out += std::string(SEPARATOR);
  out += AEEEBB::run();
  out += std::string(SEPARATOR);
  out += AEEEBC::run();
  out += std::string(SEPARATOR);
  out += AEEEBD::run();
  out += std::string(SEPARATOR);
  out += AEEEBE::run();
  return out;
}

}