#include "AAEEB.h"
#include "A/AAEEBA.h"
#include "B/AAEEBB.h"
#include "C/AAEEBC.h"
#include "D/AAEEBD.h"
#include "E/AAEEBE.h"

namespace AAEEB {

std::string run() {
  std::string out("AAEEB");
  out += std::string(SEPARATOR);
  out += AAEEBA::run();
  out += std::string(SEPARATOR);
  out += AAEEBB::run();
  out += std::string(SEPARATOR);
  out += AAEEBC::run();
  out += std::string(SEPARATOR);
  out += AAEEBD::run();
  out += std::string(SEPARATOR);
  out += AAEEBE::run();
  return out;
}

}