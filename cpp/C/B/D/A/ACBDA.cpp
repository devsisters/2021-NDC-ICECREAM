#include "ACBDA.h"
#include "A/ACBDAA.h"
#include "B/ACBDAB.h"
#include "C/ACBDAC.h"
#include "D/ACBDAD.h"
#include "E/ACBDAE.h"

namespace ACBDA {

std::string run() {
  std::string out("ACBDA");
  out += std::string(SEPARATOR);
  out += ACBDAA::run();
  out += std::string(SEPARATOR);
  out += ACBDAB::run();
  out += std::string(SEPARATOR);
  out += ACBDAC::run();
  out += std::string(SEPARATOR);
  out += ACBDAD::run();
  out += std::string(SEPARATOR);
  out += ACBDAE::run();
  return out;
}

}