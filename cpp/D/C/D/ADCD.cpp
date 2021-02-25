#include "ADCD.h"
#include "A/ADCDA.h"
#include "B/ADCDB.h"
#include "C/ADCDC.h"
#include "D/ADCDD.h"
#include "E/ADCDE.h"

namespace ADCD {

std::string run() {
  std::string out("ADCD");
  out += std::string(SEPARATOR);
  out += ADCDA::run();
  out += std::string(SEPARATOR);
  out += ADCDB::run();
  out += std::string(SEPARATOR);
  out += ADCDC::run();
  out += std::string(SEPARATOR);
  out += ADCDD::run();
  out += std::string(SEPARATOR);
  out += ADCDE::run();
  return out;
}

}