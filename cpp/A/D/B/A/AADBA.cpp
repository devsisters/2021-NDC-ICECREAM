#include "AADBA.h"
#include "A/AADBAA.h"
#include "B/AADBAB.h"
#include "C/AADBAC.h"
#include "D/AADBAD.h"
#include "E/AADBAE.h"

namespace AADBA {

std::string run() {
  std::string out("AADBA");
  out += std::string(SEPARATOR);
  out += AADBAA::run();
  out += std::string(SEPARATOR);
  out += AADBAB::run();
  out += std::string(SEPARATOR);
  out += AADBAC::run();
  out += std::string(SEPARATOR);
  out += AADBAD::run();
  out += std::string(SEPARATOR);
  out += AADBAE::run();
  return out;
}

}