#include "ADBAA.h"
#include "A/ADBAAA.h"
#include "B/ADBAAB.h"
#include "C/ADBAAC.h"
#include "D/ADBAAD.h"
#include "E/ADBAAE.h"

namespace ADBAA {

std::string run() {
  std::string out("ADBAA");
  out += std::string(SEPARATOR);
  out += ADBAAA::run();
  out += std::string(SEPARATOR);
  out += ADBAAB::run();
  out += std::string(SEPARATOR);
  out += ADBAAC::run();
  out += std::string(SEPARATOR);
  out += ADBAAD::run();
  out += std::string(SEPARATOR);
  out += ADBAAE::run();
  return out;
}

}