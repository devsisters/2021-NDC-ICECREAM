#include "ADCAD.h"
#include "A/ADCADA.h"
#include "B/ADCADB.h"
#include "C/ADCADC.h"
#include "D/ADCADD.h"
#include "E/ADCADE.h"

namespace ADCAD {

std::string run() {
  std::string out("ADCAD");
  out += std::string(SEPARATOR);
  out += ADCADA::run();
  out += std::string(SEPARATOR);
  out += ADCADB::run();
  out += std::string(SEPARATOR);
  out += ADCADC::run();
  out += std::string(SEPARATOR);
  out += ADCADD::run();
  out += std::string(SEPARATOR);
  out += ADCADE::run();
  return out;
}

}