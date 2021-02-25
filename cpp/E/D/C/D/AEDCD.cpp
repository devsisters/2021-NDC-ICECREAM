#include "AEDCD.h"
#include "A/AEDCDA.h"
#include "B/AEDCDB.h"
#include "C/AEDCDC.h"
#include "D/AEDCDD.h"
#include "E/AEDCDE.h"

namespace AEDCD {

std::string run() {
  std::string out("AEDCD");
  out += std::string(SEPARATOR);
  out += AEDCDA::run();
  out += std::string(SEPARATOR);
  out += AEDCDB::run();
  out += std::string(SEPARATOR);
  out += AEDCDC::run();
  out += std::string(SEPARATOR);
  out += AEDCDD::run();
  out += std::string(SEPARATOR);
  out += AEDCDE::run();
  return out;
}

}