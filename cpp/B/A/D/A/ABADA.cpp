#include "ABADA.h"
#include "A/ABADAA.h"
#include "B/ABADAB.h"
#include "C/ABADAC.h"
#include "D/ABADAD.h"
#include "E/ABADAE.h"

namespace ABADA {

std::string run() {
  std::string out("ABADA");
  out += std::string(SEPARATOR);
  out += ABADAA::run();
  out += std::string(SEPARATOR);
  out += ABADAB::run();
  out += std::string(SEPARATOR);
  out += ABADAC::run();
  out += std::string(SEPARATOR);
  out += ABADAD::run();
  out += std::string(SEPARATOR);
  out += ABADAE::run();
  return out;
}

}