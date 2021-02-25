#include "AEBEA.h"
#include "A/AEBEAA.h"
#include "B/AEBEAB.h"
#include "C/AEBEAC.h"
#include "D/AEBEAD.h"
#include "E/AEBEAE.h"

namespace AEBEA {

std::string run() {
  std::string out("AEBEA");
  out += std::string(SEPARATOR);
  out += AEBEAA::run();
  out += std::string(SEPARATOR);
  out += AEBEAB::run();
  out += std::string(SEPARATOR);
  out += AEBEAC::run();
  out += std::string(SEPARATOR);
  out += AEBEAD::run();
  out += std::string(SEPARATOR);
  out += AEBEAE::run();
  return out;
}

}