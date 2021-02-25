#include "ADCEE.h"
#include "A/ADCEEA.h"
#include "B/ADCEEB.h"
#include "C/ADCEEC.h"
#include "D/ADCEED.h"
#include "E/ADCEEE.h"

namespace ADCEE {

std::string run() {
  std::string out("ADCEE");
  out += std::string(SEPARATOR);
  out += ADCEEA::run();
  out += std::string(SEPARATOR);
  out += ADCEEB::run();
  out += std::string(SEPARATOR);
  out += ADCEEC::run();
  out += std::string(SEPARATOR);
  out += ADCEED::run();
  out += std::string(SEPARATOR);
  out += ADCEEE::run();
  return out;
}

}