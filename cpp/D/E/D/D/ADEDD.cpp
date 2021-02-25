#include "ADEDD.h"
#include "A/ADEDDA.h"
#include "B/ADEDDB.h"
#include "C/ADEDDC.h"
#include "D/ADEDDD.h"
#include "E/ADEDDE.h"

namespace ADEDD {

std::string run() {
  std::string out("ADEDD");
  out += std::string(SEPARATOR);
  out += ADEDDA::run();
  out += std::string(SEPARATOR);
  out += ADEDDB::run();
  out += std::string(SEPARATOR);
  out += ADEDDC::run();
  out += std::string(SEPARATOR);
  out += ADEDDD::run();
  out += std::string(SEPARATOR);
  out += ADEDDE::run();
  return out;
}

}