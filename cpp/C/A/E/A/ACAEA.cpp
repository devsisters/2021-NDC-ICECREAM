#include "ACAEA.h"
#include "A/ACAEAA.h"
#include "B/ACAEAB.h"
#include "C/ACAEAC.h"
#include "D/ACAEAD.h"
#include "E/ACAEAE.h"

namespace ACAEA {

std::string run() {
  std::string out("ACAEA");
  out += std::string(SEPARATOR);
  out += ACAEAA::run();
  out += std::string(SEPARATOR);
  out += ACAEAB::run();
  out += std::string(SEPARATOR);
  out += ACAEAC::run();
  out += std::string(SEPARATOR);
  out += ACAEAD::run();
  out += std::string(SEPARATOR);
  out += ACAEAE::run();
  return out;
}

}