#include "AADA.h"
#include "A/AADAA.h"
#include "B/AADAB.h"
#include "C/AADAC.h"
#include "D/AADAD.h"
#include "E/AADAE.h"

namespace AADA {

std::string run() {
  std::string out("AADA");
  out += std::string(SEPARATOR);
  out += AADAA::run();
  out += std::string(SEPARATOR);
  out += AADAB::run();
  out += std::string(SEPARATOR);
  out += AADAC::run();
  out += std::string(SEPARATOR);
  out += AADAD::run();
  out += std::string(SEPARATOR);
  out += AADAE::run();
  return out;
}

}