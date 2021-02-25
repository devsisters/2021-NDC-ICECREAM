#include "AABCD.h"
#include "A/AABCDA.h"
#include "B/AABCDB.h"
#include "C/AABCDC.h"
#include "D/AABCDD.h"
#include "E/AABCDE.h"

namespace AABCD {

std::string run() {
  std::string out("AABCD");
  out += std::string(SEPARATOR);
  out += AABCDA::run();
  out += std::string(SEPARATOR);
  out += AABCDB::run();
  out += std::string(SEPARATOR);
  out += AABCDC::run();
  out += std::string(SEPARATOR);
  out += AABCDD::run();
  out += std::string(SEPARATOR);
  out += AABCDE::run();
  return out;
}

}