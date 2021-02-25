#include "ABCD.h"
#include "A/ABCDA.h"
#include "B/ABCDB.h"
#include "C/ABCDC.h"
#include "D/ABCDD.h"
#include "E/ABCDE.h"

namespace ABCD {

std::string run() {
  std::string out("ABCD");
  out += std::string(SEPARATOR);
  out += ABCDA::run();
  out += std::string(SEPARATOR);
  out += ABCDB::run();
  out += std::string(SEPARATOR);
  out += ABCDC::run();
  out += std::string(SEPARATOR);
  out += ABCDD::run();
  out += std::string(SEPARATOR);
  out += ABCDE::run();
  return out;
}

}