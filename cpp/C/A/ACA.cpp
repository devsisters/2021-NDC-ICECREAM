#include "ACA.h"
#include "A/ACAA.h"
#include "B/ACAB.h"
#include "C/ACAC.h"
#include "D/ACAD.h"
#include "E/ACAE.h"

namespace ACA {

std::string run() {
  std::string out("ACA");
  out += std::string(SEPARATOR);
  out += ACAA::run();
  out += std::string(SEPARATOR);
  out += ACAB::run();
  out += std::string(SEPARATOR);
  out += ACAC::run();
  out += std::string(SEPARATOR);
  out += ACAD::run();
  out += std::string(SEPARATOR);
  out += ACAE::run();
  return out;
}

}