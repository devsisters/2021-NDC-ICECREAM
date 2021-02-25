#include "ADAEA.h"
#include "A/ADAEAA.h"
#include "B/ADAEAB.h"
#include "C/ADAEAC.h"
#include "D/ADAEAD.h"
#include "E/ADAEAE.h"

namespace ADAEA {

std::string run() {
  std::string out("ADAEA");
  out += std::string(SEPARATOR);
  out += ADAEAA::run();
  out += std::string(SEPARATOR);
  out += ADAEAB::run();
  out += std::string(SEPARATOR);
  out += ADAEAC::run();
  out += std::string(SEPARATOR);
  out += ADAEAD::run();
  out += std::string(SEPARATOR);
  out += ADAEAE::run();
  return out;
}

}