#include "ADBA.h"
#include "A/ADBAA.h"
#include "B/ADBAB.h"
#include "C/ADBAC.h"
#include "D/ADBAD.h"
#include "E/ADBAE.h"

namespace ADBA {

std::string run() {
  std::string out("ADBA");
  out += std::string(SEPARATOR);
  out += ADBAA::run();
  out += std::string(SEPARATOR);
  out += ADBAB::run();
  out += std::string(SEPARATOR);
  out += ADBAC::run();
  out += std::string(SEPARATOR);
  out += ADBAD::run();
  out += std::string(SEPARATOR);
  out += ADBAE::run();
  return out;
}

}