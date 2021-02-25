#include "AAAEA.h"
#include "A/AAAEAA.h"
#include "B/AAAEAB.h"
#include "C/AAAEAC.h"
#include "D/AAAEAD.h"
#include "E/AAAEAE.h"

namespace AAAEA {

std::string run() {
  std::string out("AAAEA");
  out += std::string(SEPARATOR);
  out += AAAEAA::run();
  out += std::string(SEPARATOR);
  out += AAAEAB::run();
  out += std::string(SEPARATOR);
  out += AAAEAC::run();
  out += std::string(SEPARATOR);
  out += AAAEAD::run();
  out += std::string(SEPARATOR);
  out += AAAEAE::run();
  return out;
}

}