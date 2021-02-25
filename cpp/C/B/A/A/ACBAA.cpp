#include "ACBAA.h"
#include "A/ACBAAA.h"
#include "B/ACBAAB.h"
#include "C/ACBAAC.h"
#include "D/ACBAAD.h"
#include "E/ACBAAE.h"

namespace ACBAA {

std::string run() {
  std::string out("ACBAA");
  out += std::string(SEPARATOR);
  out += ACBAAA::run();
  out += std::string(SEPARATOR);
  out += ACBAAB::run();
  out += std::string(SEPARATOR);
  out += ACBAAC::run();
  out += std::string(SEPARATOR);
  out += ACBAAD::run();
  out += std::string(SEPARATOR);
  out += ACBAAE::run();
  return out;
}

}