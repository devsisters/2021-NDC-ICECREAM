#include "AEDBA.h"
#include "A/AEDBAA.h"
#include "B/AEDBAB.h"
#include "C/AEDBAC.h"
#include "D/AEDBAD.h"
#include "E/AEDBAE.h"

namespace AEDBA {

std::string run() {
  std::string out("AEDBA");
  out += std::string(SEPARATOR);
  out += AEDBAA::run();
  out += std::string(SEPARATOR);
  out += AEDBAB::run();
  out += std::string(SEPARATOR);
  out += AEDBAC::run();
  out += std::string(SEPARATOR);
  out += AEDBAD::run();
  out += std::string(SEPARATOR);
  out += AEDBAE::run();
  return out;
}

}