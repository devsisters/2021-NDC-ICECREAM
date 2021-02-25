#include "ADDD.h"
#include "A/ADDDA.h"
#include "B/ADDDB.h"
#include "C/ADDDC.h"
#include "D/ADDDD.h"
#include "E/ADDDE.h"

namespace ADDD {

std::string run() {
  std::string out("ADDD");
  out += std::string(SEPARATOR);
  out += ADDDA::run();
  out += std::string(SEPARATOR);
  out += ADDDB::run();
  out += std::string(SEPARATOR);
  out += ADDDC::run();
  out += std::string(SEPARATOR);
  out += ADDDD::run();
  out += std::string(SEPARATOR);
  out += ADDDE::run();
  return out;
}

}