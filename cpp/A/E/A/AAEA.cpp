#include "AAEA.h"
#include "A/AAEAA.h"
#include "B/AAEAB.h"
#include "C/AAEAC.h"
#include "D/AAEAD.h"
#include "E/AAEAE.h"

namespace AAEA {

std::string run() {
  std::string out("AAEA");
  out += std::string(SEPARATOR);
  out += AAEAA::run();
  out += std::string(SEPARATOR);
  out += AAEAB::run();
  out += std::string(SEPARATOR);
  out += AAEAC::run();
  out += std::string(SEPARATOR);
  out += AAEAD::run();
  out += std::string(SEPARATOR);
  out += AAEAE::run();
  return out;
}

}