#include "AECEB.h"
#include "A/AECEBA.h"
#include "B/AECEBB.h"
#include "C/AECEBC.h"
#include "D/AECEBD.h"
#include "E/AECEBE.h"

namespace AECEB {

std::string run() {
  std::string out("AECEB");
  out += std::string(SEPARATOR);
  out += AECEBA::run();
  out += std::string(SEPARATOR);
  out += AECEBB::run();
  out += std::string(SEPARATOR);
  out += AECEBC::run();
  out += std::string(SEPARATOR);
  out += AECEBD::run();
  out += std::string(SEPARATOR);
  out += AECEBE::run();
  return out;
}

}