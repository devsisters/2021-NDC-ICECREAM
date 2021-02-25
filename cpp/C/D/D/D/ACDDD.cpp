#include "ACDDD.h"
#include "A/ACDDDA.h"
#include "B/ACDDDB.h"
#include "C/ACDDDC.h"
#include "D/ACDDDD.h"
#include "E/ACDDDE.h"

namespace ACDDD {

std::string run() {
  std::string out("ACDDD");
  out += std::string(SEPARATOR);
  out += ACDDDA::run();
  out += std::string(SEPARATOR);
  out += ACDDDB::run();
  out += std::string(SEPARATOR);
  out += ACDDDC::run();
  out += std::string(SEPARATOR);
  out += ACDDDD::run();
  out += std::string(SEPARATOR);
  out += ACDDDE::run();
  return out;
}

}