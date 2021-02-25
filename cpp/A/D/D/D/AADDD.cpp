#include "AADDD.h"
#include "A/AADDDA.h"
#include "B/AADDDB.h"
#include "C/AADDDC.h"
#include "D/AADDDD.h"
#include "E/AADDDE.h"

namespace AADDD {

std::string run() {
  std::string out("AADDD");
  out += std::string(SEPARATOR);
  out += AADDDA::run();
  out += std::string(SEPARATOR);
  out += AADDDB::run();
  out += std::string(SEPARATOR);
  out += AADDDC::run();
  out += std::string(SEPARATOR);
  out += AADDDD::run();
  out += std::string(SEPARATOR);
  out += AADDDE::run();
  return out;
}

}