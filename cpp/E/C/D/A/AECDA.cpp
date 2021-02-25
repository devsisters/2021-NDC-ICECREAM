#include "AECDA.h"
#include "A/AECDAA.h"
#include "B/AECDAB.h"
#include "C/AECDAC.h"
#include "D/AECDAD.h"
#include "E/AECDAE.h"

namespace AECDA {

std::string run() {
  std::string out("AECDA");
  out += std::string(SEPARATOR);
  out += AECDAA::run();
  out += std::string(SEPARATOR);
  out += AECDAB::run();
  out += std::string(SEPARATOR);
  out += AECDAC::run();
  out += std::string(SEPARATOR);
  out += AECDAD::run();
  out += std::string(SEPARATOR);
  out += AECDAE::run();
  return out;
}

}