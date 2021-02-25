#include "ADCCD.h"
#include "A/ADCCDA.h"
#include "B/ADCCDB.h"
#include "C/ADCCDC.h"
#include "D/ADCCDD.h"
#include "E/ADCCDE.h"

namespace ADCCD {

std::string run() {
  std::string out("ADCCD");
  out += std::string(SEPARATOR);
  out += ADCCDA::run();
  out += std::string(SEPARATOR);
  out += ADCCDB::run();
  out += std::string(SEPARATOR);
  out += ADCCDC::run();
  out += std::string(SEPARATOR);
  out += ADCCDD::run();
  out += std::string(SEPARATOR);
  out += ADCCDE::run();
  return out;
}

}