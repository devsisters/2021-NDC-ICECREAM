#include "ACDA.h"
#include "A/ACDAA.h"
#include "B/ACDAB.h"
#include "C/ACDAC.h"
#include "D/ACDAD.h"
#include "E/ACDAE.h"

namespace ACDA {

std::string run() {
  std::string out("ACDA");
  out += std::string(SEPARATOR);
  out += ACDAA::run();
  out += std::string(SEPARATOR);
  out += ACDAB::run();
  out += std::string(SEPARATOR);
  out += ACDAC::run();
  out += std::string(SEPARATOR);
  out += ACDAD::run();
  out += std::string(SEPARATOR);
  out += ACDAE::run();
  return out;
}

}