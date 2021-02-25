#include "ACBEA.h"
#include "A/ACBEAA.h"
#include "B/ACBEAB.h"
#include "C/ACBEAC.h"
#include "D/ACBEAD.h"
#include "E/ACBEAE.h"

namespace ACBEA {

std::string run() {
  std::string out("ACBEA");
  out += std::string(SEPARATOR);
  out += ACBEAA::run();
  out += std::string(SEPARATOR);
  out += ACBEAB::run();
  out += std::string(SEPARATOR);
  out += ACBEAC::run();
  out += std::string(SEPARATOR);
  out += ACBEAD::run();
  out += std::string(SEPARATOR);
  out += ACBEAE::run();
  return out;
}

}