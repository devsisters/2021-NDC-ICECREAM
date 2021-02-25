#include "AEDDD.h"
#include "A/AEDDDA.h"
#include "B/AEDDDB.h"
#include "C/AEDDDC.h"
#include "D/AEDDDD.h"
#include "E/AEDDDE.h"

namespace AEDDD {

std::string run() {
  std::string out("AEDDD");
  out += std::string(SEPARATOR);
  out += AEDDDA::run();
  out += std::string(SEPARATOR);
  out += AEDDDB::run();
  out += std::string(SEPARATOR);
  out += AEDDDC::run();
  out += std::string(SEPARATOR);
  out += AEDDDD::run();
  out += std::string(SEPARATOR);
  out += AEDDDE::run();
  return out;
}

}