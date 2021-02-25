#include "AAEB.h"
#include "A/AAEBA.h"
#include "B/AAEBB.h"
#include "C/AAEBC.h"
#include "D/AAEBD.h"
#include "E/AAEBE.h"

namespace AAEB {

std::string run() {
  std::string out("AAEB");
  out += std::string(SEPARATOR);
  out += AAEBA::run();
  out += std::string(SEPARATOR);
  out += AAEBB::run();
  out += std::string(SEPARATOR);
  out += AAEBC::run();
  out += std::string(SEPARATOR);
  out += AAEBD::run();
  out += std::string(SEPARATOR);
  out += AAEBE::run();
  return out;
}

}