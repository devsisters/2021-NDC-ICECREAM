#include "ADCE.h"
#include "A/ADCEA.h"
#include "B/ADCEB.h"
#include "C/ADCEC.h"
#include "D/ADCED.h"
#include "E/ADCEE.h"

namespace ADCE {

std::string run() {
  std::string out("ADCE");
  out += std::string(SEPARATOR);
  out += ADCEA::run();
  out += std::string(SEPARATOR);
  out += ADCEB::run();
  out += std::string(SEPARATOR);
  out += ADCEC::run();
  out += std::string(SEPARATOR);
  out += ADCED::run();
  out += std::string(SEPARATOR);
  out += ADCEE::run();
  return out;
}

}