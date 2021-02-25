#include "ACEDD.h"
#include "A/ACEDDA.h"
#include "B/ACEDDB.h"
#include "C/ACEDDC.h"
#include "D/ACEDDD.h"
#include "E/ACEDDE.h"

namespace ACEDD {

std::string run() {
  std::string out("ACEDD");
  out += std::string(SEPARATOR);
  out += ACEDDA::run();
  out += std::string(SEPARATOR);
  out += ACEDDB::run();
  out += std::string(SEPARATOR);
  out += ACEDDC::run();
  out += std::string(SEPARATOR);
  out += ACEDDD::run();
  out += std::string(SEPARATOR);
  out += ACEDDE::run();
  return out;
}

}