#include "ADCCA.h"
#include "A/ADCCAA.h"
#include "B/ADCCAB.h"
#include "C/ADCCAC.h"
#include "D/ADCCAD.h"
#include "E/ADCCAE.h"

namespace ADCCA {

std::string run() {
  std::string out("ADCCA");
  out += std::string(SEPARATOR);
  out += ADCCAA::run();
  out += std::string(SEPARATOR);
  out += ADCCAB::run();
  out += std::string(SEPARATOR);
  out += ADCCAC::run();
  out += std::string(SEPARATOR);
  out += ADCCAD::run();
  out += std::string(SEPARATOR);
  out += ADCCAE::run();
  return out;
}

}