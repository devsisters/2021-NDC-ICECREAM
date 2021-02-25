#include "ABDBA.h"
#include "A/ABDBAA.h"
#include "B/ABDBAB.h"
#include "C/ABDBAC.h"
#include "D/ABDBAD.h"
#include "E/ABDBAE.h"

namespace ABDBA {

std::string run() {
  std::string out("ABDBA");
  out += std::string(SEPARATOR);
  out += ABDBAA::run();
  out += std::string(SEPARATOR);
  out += ABDBAB::run();
  out += std::string(SEPARATOR);
  out += ABDBAC::run();
  out += std::string(SEPARATOR);
  out += ABDBAD::run();
  out += std::string(SEPARATOR);
  out += ABDBAE::run();
  return out;
}

}