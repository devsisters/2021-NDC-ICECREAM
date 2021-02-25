#include "AEB.h"
#include "A/AEBA.h"
#include "B/AEBB.h"
#include "C/AEBC.h"
#include "D/AEBD.h"
#include "E/AEBE.h"

namespace AEB {

std::string run() {
  std::string out("AEB");
  out += std::string(SEPARATOR);
  out += AEBA::run();
  out += std::string(SEPARATOR);
  out += AEBB::run();
  out += std::string(SEPARATOR);
  out += AEBC::run();
  out += std::string(SEPARATOR);
  out += AEBD::run();
  out += std::string(SEPARATOR);
  out += AEBE::run();
  return out;
}

}