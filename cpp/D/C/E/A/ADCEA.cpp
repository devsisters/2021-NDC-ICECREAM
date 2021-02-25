#include "ADCEA.h"
#include "A/ADCEAA.h"
#include "B/ADCEAB.h"
#include "C/ADCEAC.h"
#include "D/ADCEAD.h"
#include "E/ADCEAE.h"

namespace ADCEA {

std::string run() {
  std::string out("ADCEA");
  out += std::string(SEPARATOR);
  out += ADCEAA::run();
  out += std::string(SEPARATOR);
  out += ADCEAB::run();
  out += std::string(SEPARATOR);
  out += ADCEAC::run();
  out += std::string(SEPARATOR);
  out += ADCEAD::run();
  out += std::string(SEPARATOR);
  out += ADCEAE::run();
  return out;
}

}