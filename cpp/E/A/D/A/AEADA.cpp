#include "AEADA.h"
#include "A/AEADAA.h"
#include "B/AEADAB.h"
#include "C/AEADAC.h"
#include "D/AEADAD.h"
#include "E/AEADAE.h"

namespace AEADA {

std::string run() {
  std::string out("AEADA");
  out += std::string(SEPARATOR);
  out += AEADAA::run();
  out += std::string(SEPARATOR);
  out += AEADAB::run();
  out += std::string(SEPARATOR);
  out += AEADAC::run();
  out += std::string(SEPARATOR);
  out += AEADAD::run();
  out += std::string(SEPARATOR);
  out += AEADAE::run();
  return out;
}

}