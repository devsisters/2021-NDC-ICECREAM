#include "ADDCD.h"
#include "A/ADDCDA.h"
#include "B/ADDCDB.h"
#include "C/ADDCDC.h"
#include "D/ADDCDD.h"
#include "E/ADDCDE.h"

namespace ADDCD {

std::string run() {
  std::string out("ADDCD");
  out += std::string(SEPARATOR);
  out += ADDCDA::run();
  out += std::string(SEPARATOR);
  out += ADDCDB::run();
  out += std::string(SEPARATOR);
  out += ADDCDC::run();
  out += std::string(SEPARATOR);
  out += ADDCDD::run();
  out += std::string(SEPARATOR);
  out += ADDCDE::run();
  return out;
}

}