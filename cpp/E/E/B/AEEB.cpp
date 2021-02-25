#include "AEEB.h"
#include "A/AEEBA.h"
#include "B/AEEBB.h"
#include "C/AEEBC.h"
#include "D/AEEBD.h"
#include "E/AEEBE.h"

namespace AEEB {

std::string run() {
  std::string out("AEEB");
  out += std::string(SEPARATOR);
  out += AEEBA::run();
  out += std::string(SEPARATOR);
  out += AEEBB::run();
  out += std::string(SEPARATOR);
  out += AEEBC::run();
  out += std::string(SEPARATOR);
  out += AEEBD::run();
  out += std::string(SEPARATOR);
  out += AEEBE::run();
  return out;
}

}