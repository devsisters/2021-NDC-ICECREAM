#include "ADCEB.h"
#include "A/ADCEBA.h"
#include "B/ADCEBB.h"
#include "C/ADCEBC.h"
#include "D/ADCEBD.h"
#include "E/ADCEBE.h"

namespace ADCEB {

std::string run() {
  std::string out("ADCEB");
  out += std::string(SEPARATOR);
  out += ADCEBA::run();
  out += std::string(SEPARATOR);
  out += ADCEBB::run();
  out += std::string(SEPARATOR);
  out += ADCEBC::run();
  out += std::string(SEPARATOR);
  out += ADCEBD::run();
  out += std::string(SEPARATOR);
  out += ADCEBE::run();
  return out;
}

}