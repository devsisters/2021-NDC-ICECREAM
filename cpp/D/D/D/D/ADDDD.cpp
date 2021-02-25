#include "ADDDD.h"
#include "A/ADDDDA.h"
#include "B/ADDDDB.h"
#include "C/ADDDDC.h"
#include "D/ADDDDD.h"
#include "E/ADDDDE.h"

namespace ADDDD {

std::string run() {
  std::string out("ADDDD");
  out += std::string(SEPARATOR);
  out += ADDDDA::run();
  out += std::string(SEPARATOR);
  out += ADDDDB::run();
  out += std::string(SEPARATOR);
  out += ADDDDC::run();
  out += std::string(SEPARATOR);
  out += ADDDDD::run();
  out += std::string(SEPARATOR);
  out += ADDDDE::run();
  return out;
}

}