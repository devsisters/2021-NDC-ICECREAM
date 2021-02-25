#include "ACEBA.h"
#include "A/ACEBAA.h"
#include "B/ACEBAB.h"
#include "C/ACEBAC.h"
#include "D/ACEBAD.h"
#include "E/ACEBAE.h"

namespace ACEBA {

std::string run() {
  std::string out("ACEBA");
  out += std::string(SEPARATOR);
  out += ACEBAA::run();
  out += std::string(SEPARATOR);
  out += ACEBAB::run();
  out += std::string(SEPARATOR);
  out += ACEBAC::run();
  out += std::string(SEPARATOR);
  out += ACEBAD::run();
  out += std::string(SEPARATOR);
  out += ACEBAE::run();
  return out;
}

}