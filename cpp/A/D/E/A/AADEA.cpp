#include "AADEA.h"
#include "A/AADEAA.h"
#include "B/AADEAB.h"
#include "C/AADEAC.h"
#include "D/AADEAD.h"
#include "E/AADEAE.h"

namespace AADEA {

std::string run() {
  std::string out("AADEA");
  out += std::string(SEPARATOR);
  out += AADEAA::run();
  out += std::string(SEPARATOR);
  out += AADEAB::run();
  out += std::string(SEPARATOR);
  out += AADEAC::run();
  out += std::string(SEPARATOR);
  out += AADEAD::run();
  out += std::string(SEPARATOR);
  out += AADEAE::run();
  return out;
}

}