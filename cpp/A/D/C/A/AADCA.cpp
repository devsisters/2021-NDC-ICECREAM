#include "AADCA.h"
#include "A/AADCAA.h"
#include "B/AADCAB.h"
#include "C/AADCAC.h"
#include "D/AADCAD.h"
#include "E/AADCAE.h"

namespace AADCA {

std::string run() {
  std::string out("AADCA");
  out += std::string(SEPARATOR);
  out += AADCAA::run();
  out += std::string(SEPARATOR);
  out += AADCAB::run();
  out += std::string(SEPARATOR);
  out += AADCAC::run();
  out += std::string(SEPARATOR);
  out += AADCAD::run();
  out += std::string(SEPARATOR);
  out += AADCAE::run();
  return out;
}

}