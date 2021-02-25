#include "AAEBA.h"
#include "A/AAEBAA.h"
#include "B/AAEBAB.h"
#include "C/AAEBAC.h"
#include "D/AAEBAD.h"
#include "E/AAEBAE.h"

namespace AAEBA {

std::string run() {
  std::string out("AAEBA");
  out += std::string(SEPARATOR);
  out += AAEBAA::run();
  out += std::string(SEPARATOR);
  out += AAEBAB::run();
  out += std::string(SEPARATOR);
  out += AAEBAC::run();
  out += std::string(SEPARATOR);
  out += AAEBAD::run();
  out += std::string(SEPARATOR);
  out += AAEBAE::run();
  return out;
}

}