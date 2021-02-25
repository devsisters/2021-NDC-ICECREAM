#include "ADCAE.h"
#include "A/ADCAEA.h"
#include "B/ADCAEB.h"
#include "C/ADCAEC.h"
#include "D/ADCAED.h"
#include "E/ADCAEE.h"

namespace ADCAE {

std::string run() {
  std::string out("ADCAE");
  out += std::string(SEPARATOR);
  out += ADCAEA::run();
  out += std::string(SEPARATOR);
  out += ADCAEB::run();
  out += std::string(SEPARATOR);
  out += ADCAEC::run();
  out += std::string(SEPARATOR);
  out += ADCAED::run();
  out += std::string(SEPARATOR);
  out += ADCAEE::run();
  return out;
}

}