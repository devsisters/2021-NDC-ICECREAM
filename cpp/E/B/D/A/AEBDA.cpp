#include "AEBDA.h"
#include "A/AEBDAA.h"
#include "B/AEBDAB.h"
#include "C/AEBDAC.h"
#include "D/AEBDAD.h"
#include "E/AEBDAE.h"

namespace AEBDA {

std::string run() {
  std::string out("AEBDA");
  out += std::string(SEPARATOR);
  out += AEBDAA::run();
  out += std::string(SEPARATOR);
  out += AEBDAB::run();
  out += std::string(SEPARATOR);
  out += AEBDAC::run();
  out += std::string(SEPARATOR);
  out += AEBDAD::run();
  out += std::string(SEPARATOR);
  out += AEBDAE::run();
  return out;
}

}