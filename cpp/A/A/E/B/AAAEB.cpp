#include "AAAEB.h"
#include "A/AAAEBA.h"
#include "B/AAAEBB.h"
#include "C/AAAEBC.h"
#include "D/AAAEBD.h"
#include "E/AAAEBE.h"

namespace AAAEB {

std::string run() {
  std::string out("AAAEB");
  out += std::string(SEPARATOR);
  out += AAAEBA::run();
  out += std::string(SEPARATOR);
  out += AAAEBB::run();
  out += std::string(SEPARATOR);
  out += AAAEBC::run();
  out += std::string(SEPARATOR);
  out += AAAEBD::run();
  out += std::string(SEPARATOR);
  out += AAAEBE::run();
  return out;
}

}