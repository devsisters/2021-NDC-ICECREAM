#include "AEAEA.h"
#include "A/AEAEAA.h"
#include "B/AEAEAB.h"
#include "C/AEAEAC.h"
#include "D/AEAEAD.h"
#include "E/AEAEAE.h"

namespace AEAEA {

std::string run() {
  std::string out("AEAEA");
  out += std::string(SEPARATOR);
  out += AEAEAA::run();
  out += std::string(SEPARATOR);
  out += AEAEAB::run();
  out += std::string(SEPARATOR);
  out += AEAEAC::run();
  out += std::string(SEPARATOR);
  out += AEAEAD::run();
  out += std::string(SEPARATOR);
  out += AEAEAE::run();
  return out;
}

}