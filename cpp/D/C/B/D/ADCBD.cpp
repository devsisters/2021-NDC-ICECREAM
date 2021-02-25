#include "ADCBD.h"
#include "A/ADCBDA.h"
#include "B/ADCBDB.h"
#include "C/ADCBDC.h"
#include "D/ADCBDD.h"
#include "E/ADCBDE.h"

namespace ADCBD {

std::string run() {
  std::string out("ADCBD");
  out += std::string(SEPARATOR);
  out += ADCBDA::run();
  out += std::string(SEPARATOR);
  out += ADCBDB::run();
  out += std::string(SEPARATOR);
  out += ADCBDC::run();
  out += std::string(SEPARATOR);
  out += ADCBDD::run();
  out += std::string(SEPARATOR);
  out += ADCBDE::run();
  return out;
}

}