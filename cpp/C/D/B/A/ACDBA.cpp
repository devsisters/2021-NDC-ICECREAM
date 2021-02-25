#include "ACDBA.h"
#include "A/ACDBAA.h"
#include "B/ACDBAB.h"
#include "C/ACDBAC.h"
#include "D/ACDBAD.h"
#include "E/ACDBAE.h"

namespace ACDBA {

std::string run() {
  std::string out("ACDBA");
  out += std::string(SEPARATOR);
  out += ACDBAA::run();
  out += std::string(SEPARATOR);
  out += ACDBAB::run();
  out += std::string(SEPARATOR);
  out += ACDBAC::run();
  out += std::string(SEPARATOR);
  out += ACDBAD::run();
  out += std::string(SEPARATOR);
  out += ACDBAE::run();
  return out;
}

}