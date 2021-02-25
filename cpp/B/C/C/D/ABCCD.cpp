#include "ABCCD.h"
#include "A/ABCCDA.h"
#include "B/ABCCDB.h"
#include "C/ABCCDC.h"
#include "D/ABCCDD.h"
#include "E/ABCCDE.h"

namespace ABCCD {

std::string run() {
  std::string out("ABCCD");
  out += std::string(SEPARATOR);
  out += ABCCDA::run();
  out += std::string(SEPARATOR);
  out += ABCCDB::run();
  out += std::string(SEPARATOR);
  out += ABCCDC::run();
  out += std::string(SEPARATOR);
  out += ABCCDD::run();
  out += std::string(SEPARATOR);
  out += ABCCDE::run();
  return out;
}

}