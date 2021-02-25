#include "AADCD.h"
#include "A/AADCDA.h"
#include "B/AADCDB.h"
#include "C/AADCDC.h"
#include "D/AADCDD.h"
#include "E/AADCDE.h"

namespace AADCD {

std::string run() {
  std::string out("AADCD");
  out += std::string(SEPARATOR);
  out += AADCDA::run();
  out += std::string(SEPARATOR);
  out += AADCDB::run();
  out += std::string(SEPARATOR);
  out += AADCDC::run();
  out += std::string(SEPARATOR);
  out += AADCDD::run();
  out += std::string(SEPARATOR);
  out += AADCDE::run();
  return out;
}

}