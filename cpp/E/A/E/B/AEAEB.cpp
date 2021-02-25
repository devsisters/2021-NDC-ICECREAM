#include "AEAEB.h"
#include "A/AEAEBA.h"
#include "B/AEAEBB.h"
#include "C/AEAEBC.h"
#include "D/AEAEBD.h"
#include "E/AEAEBE.h"

namespace AEAEB {

std::string run() {
  std::string out("AEAEB");
  out += std::string(SEPARATOR);
  out += AEAEBA::run();
  out += std::string(SEPARATOR);
  out += AEAEBB::run();
  out += std::string(SEPARATOR);
  out += AEAEBC::run();
  out += std::string(SEPARATOR);
  out += AEAEBD::run();
  out += std::string(SEPARATOR);
  out += AEAEBE::run();
  return out;
}

}