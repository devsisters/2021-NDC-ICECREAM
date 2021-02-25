#include "ACCCA.h"
#include "A/ACCCAA.h"
#include "B/ACCCAB.h"
#include "C/ACCCAC.h"
#include "D/ACCCAD.h"
#include "E/ACCCAE.h"

namespace ACCCA {

std::string run() {
  std::string out("ACCCA");
  out += std::string(SEPARATOR);
  out += ACCCAA::run();
  out += std::string(SEPARATOR);
  out += ACCCAB::run();
  out += std::string(SEPARATOR);
  out += ACCCAC::run();
  out += std::string(SEPARATOR);
  out += ACCCAD::run();
  out += std::string(SEPARATOR);
  out += ACCCAE::run();
  return out;
}

}