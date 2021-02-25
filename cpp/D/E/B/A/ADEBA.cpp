#include "ADEBA.h"
#include "A/ADEBAA.h"
#include "B/ADEBAB.h"
#include "C/ADEBAC.h"
#include "D/ADEBAD.h"
#include "E/ADEBAE.h"

namespace ADEBA {

std::string run() {
  std::string out("ADEBA");
  out += std::string(SEPARATOR);
  out += ADEBAA::run();
  out += std::string(SEPARATOR);
  out += ADEBAB::run();
  out += std::string(SEPARATOR);
  out += ADEBAC::run();
  out += std::string(SEPARATOR);
  out += ADEBAD::run();
  out += std::string(SEPARATOR);
  out += ADEBAE::run();
  return out;
}

}