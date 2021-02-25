#include "ADDA.h"
#include "A/ADDAA.h"
#include "B/ADDAB.h"
#include "C/ADDAC.h"
#include "D/ADDAD.h"
#include "E/ADDAE.h"

namespace ADDA {

std::string run() {
  std::string out("ADDA");
  out += std::string(SEPARATOR);
  out += ADDAA::run();
  out += std::string(SEPARATOR);
  out += ADDAB::run();
  out += std::string(SEPARATOR);
  out += ADDAC::run();
  out += std::string(SEPARATOR);
  out += ADDAD::run();
  out += std::string(SEPARATOR);
  out += ADDAE::run();
  return out;
}

}