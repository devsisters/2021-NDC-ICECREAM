#include "ADCCE.h"
#include "A/ADCCEA.h"
#include "B/ADCCEB.h"
#include "C/ADCCEC.h"
#include "D/ADCCED.h"
#include "E/ADCCEE.h"

namespace ADCCE {

std::string run() {
  std::string out("ADCCE");
  out += std::string(SEPARATOR);
  out += ADCCEA::run();
  out += std::string(SEPARATOR);
  out += ADCCEB::run();
  out += std::string(SEPARATOR);
  out += ADCCEC::run();
  out += std::string(SEPARATOR);
  out += ADCCED::run();
  out += std::string(SEPARATOR);
  out += ADCCEE::run();
  return out;
}

}