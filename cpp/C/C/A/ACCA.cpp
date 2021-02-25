#include "ACCA.h"
#include "A/ACCAA.h"
#include "B/ACCAB.h"
#include "C/ACCAC.h"
#include "D/ACCAD.h"
#include "E/ACCAE.h"

namespace ACCA {

std::string run() {
  std::string out("ACCA");
  out += std::string(SEPARATOR);
  out += ACCAA::run();
  out += std::string(SEPARATOR);
  out += ACCAB::run();
  out += std::string(SEPARATOR);
  out += ACCAC::run();
  out += std::string(SEPARATOR);
  out += ACCAD::run();
  out += std::string(SEPARATOR);
  out += ACCAE::run();
  return out;
}

}