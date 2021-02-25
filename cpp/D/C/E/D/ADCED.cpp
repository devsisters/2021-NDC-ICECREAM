#include "ADCED.h"
#include "A/ADCEDA.h"
#include "B/ADCEDB.h"
#include "C/ADCEDC.h"
#include "D/ADCEDD.h"
#include "E/ADCEDE.h"

namespace ADCED {

std::string run() {
  std::string out("ADCED");
  out += std::string(SEPARATOR);
  out += ADCEDA::run();
  out += std::string(SEPARATOR);
  out += ADCEDB::run();
  out += std::string(SEPARATOR);
  out += ADCEDC::run();
  out += std::string(SEPARATOR);
  out += ADCEDD::run();
  out += std::string(SEPARATOR);
  out += ADCEDE::run();
  return out;
}

}