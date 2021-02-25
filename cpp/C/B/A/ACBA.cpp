#include "ACBA.h"
#include "A/ACBAA.h"
#include "B/ACBAB.h"
#include "C/ACBAC.h"
#include "D/ACBAD.h"
#include "E/ACBAE.h"

namespace ACBA {

std::string run() {
  std::string out("ACBA");
  out += std::string(SEPARATOR);
  out += ACBAA::run();
  out += std::string(SEPARATOR);
  out += ACBAB::run();
  out += std::string(SEPARATOR);
  out += ACBAC::run();
  out += std::string(SEPARATOR);
  out += ACBAD::run();
  out += std::string(SEPARATOR);
  out += ACBAE::run();
  return out;
}

}