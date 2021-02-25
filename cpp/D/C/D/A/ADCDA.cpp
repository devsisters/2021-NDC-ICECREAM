#include "ADCDA.h"
#include "A/ADCDAA.h"
#include "B/ADCDAB.h"
#include "C/ADCDAC.h"
#include "D/ADCDAD.h"
#include "E/ADCDAE.h"

namespace ADCDA {

std::string run() {
  std::string out("ADCDA");
  out += std::string(SEPARATOR);
  out += ADCDAA::run();
  out += std::string(SEPARATOR);
  out += ADCDAB::run();
  out += std::string(SEPARATOR);
  out += ADCDAC::run();
  out += std::string(SEPARATOR);
  out += ADCDAD::run();
  out += std::string(SEPARATOR);
  out += ADCDAE::run();
  return out;
}

}