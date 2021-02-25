#include "ADECA.h"
#include "A/ADECAA.h"
#include "B/ADECAB.h"
#include "C/ADECAC.h"
#include "D/ADECAD.h"
#include "E/ADECAE.h"

namespace ADECA {

std::string run() {
  std::string out("ADECA");
  out += std::string(SEPARATOR);
  out += ADECAA::run();
  out += std::string(SEPARATOR);
  out += ADECAB::run();
  out += std::string(SEPARATOR);
  out += ADECAC::run();
  out += std::string(SEPARATOR);
  out += ADECAD::run();
  out += std::string(SEPARATOR);
  out += ADECAE::run();
  return out;
}

}