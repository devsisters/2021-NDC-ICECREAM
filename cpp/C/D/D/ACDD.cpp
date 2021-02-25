#include "ACDD.h"
#include "A/ACDDA.h"
#include "B/ACDDB.h"
#include "C/ACDDC.h"
#include "D/ACDDD.h"
#include "E/ACDDE.h"

namespace ACDD {

std::string run() {
  std::string out("ACDD");
  out += std::string(SEPARATOR);
  out += ACDDA::run();
  out += std::string(SEPARATOR);
  out += ACDDB::run();
  out += std::string(SEPARATOR);
  out += ACDDC::run();
  out += std::string(SEPARATOR);
  out += ACDDD::run();
  out += std::string(SEPARATOR);
  out += ACDDE::run();
  return out;
}

}