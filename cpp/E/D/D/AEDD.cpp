#include "AEDD.h"
#include "A/AEDDA.h"
#include "B/AEDDB.h"
#include "C/AEDDC.h"
#include "D/AEDDD.h"
#include "E/AEDDE.h"

namespace AEDD {

std::string run() {
  std::string out("AEDD");
  out += std::string(SEPARATOR);
  out += AEDDA::run();
  out += std::string(SEPARATOR);
  out += AEDDB::run();
  out += std::string(SEPARATOR);
  out += AEDDC::run();
  out += std::string(SEPARATOR);
  out += AEDDD::run();
  out += std::string(SEPARATOR);
  out += AEDDE::run();
  return out;
}

}