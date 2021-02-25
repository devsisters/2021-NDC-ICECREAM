#include "ACDCD.h"
#include "A/ACDCDA.h"
#include "B/ACDCDB.h"
#include "C/ACDCDC.h"
#include "D/ACDCDD.h"
#include "E/ACDCDE.h"

namespace ACDCD {

std::string run() {
  std::string out("ACDCD");
  out += std::string(SEPARATOR);
  out += ACDCDA::run();
  out += std::string(SEPARATOR);
  out += ACDCDB::run();
  out += std::string(SEPARATOR);
  out += ACDCDC::run();
  out += std::string(SEPARATOR);
  out += ACDCDD::run();
  out += std::string(SEPARATOR);
  out += ACDCDE::run();
  return out;
}

}