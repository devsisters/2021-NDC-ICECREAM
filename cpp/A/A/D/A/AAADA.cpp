#include "AAADA.h"
#include "A/AAADAA.h"
#include "B/AAADAB.h"
#include "C/AAADAC.h"
#include "D/AAADAD.h"
#include "E/AAADAE.h"

namespace AAADA {

std::string run() {
  std::string out("AAADA");
  out += std::string(SEPARATOR);
  out += AAADAA::run();
  out += std::string(SEPARATOR);
  out += AAADAB::run();
  out += std::string(SEPARATOR);
  out += AAADAC::run();
  out += std::string(SEPARATOR);
  out += AAADAD::run();
  out += std::string(SEPARATOR);
  out += AAADAE::run();
  return out;
}

}