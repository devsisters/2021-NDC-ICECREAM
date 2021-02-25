#include "ABCDD.h"
#include "A/ABCDDA.h"
#include "B/ABCDDB.h"
#include "C/ABCDDC.h"
#include "D/ABCDDD.h"
#include "E/ABCDDE.h"

namespace ABCDD {

std::string run() {
  std::string out("ABCDD");
  out += std::string(SEPARATOR);
  out += ABCDDA::run();
  out += std::string(SEPARATOR);
  out += ABCDDB::run();
  out += std::string(SEPARATOR);
  out += ABCDDC::run();
  out += std::string(SEPARATOR);
  out += ABCDDD::run();
  out += std::string(SEPARATOR);
  out += ABCDDE::run();
  return out;
}

}