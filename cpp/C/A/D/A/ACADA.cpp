#include "ACADA.h"
#include "A/ACADAA.h"
#include "B/ACADAB.h"
#include "C/ACADAC.h"
#include "D/ACADAD.h"
#include "E/ACADAE.h"

namespace ACADA {

std::string run() {
  std::string out("ACADA");
  out += std::string(SEPARATOR);
  out += ACADAA::run();
  out += std::string(SEPARATOR);
  out += ACADAB::run();
  out += std::string(SEPARATOR);
  out += ACADAC::run();
  out += std::string(SEPARATOR);
  out += ACADAD::run();
  out += std::string(SEPARATOR);
  out += ACADAE::run();
  return out;
}

}