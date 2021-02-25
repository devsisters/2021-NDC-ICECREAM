#include "ADCDD.h"
#include "A/ADCDDA.h"
#include "B/ADCDDB.h"
#include "C/ADCDDC.h"
#include "D/ADCDDD.h"
#include "E/ADCDDE.h"

namespace ADCDD {

std::string run() {
  std::string out("ADCDD");
  out += std::string(SEPARATOR);
  out += ADCDDA::run();
  out += std::string(SEPARATOR);
  out += ADCDDB::run();
  out += std::string(SEPARATOR);
  out += ADCDDC::run();
  out += std::string(SEPARATOR);
  out += ADCDDD::run();
  out += std::string(SEPARATOR);
  out += ADCDDE::run();
  return out;
}

}