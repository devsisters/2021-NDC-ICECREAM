#include "ABCBD.h"
#include "A/ABCBDA.h"
#include "B/ABCBDB.h"
#include "C/ABCBDC.h"
#include "D/ABCBDD.h"
#include "E/ABCBDE.h"

namespace ABCBD {

std::string run() {
  std::string out("ABCBD");
  out += std::string(SEPARATOR);
  out += ABCBDA::run();
  out += std::string(SEPARATOR);
  out += ABCBDB::run();
  out += std::string(SEPARATOR);
  out += ABCBDC::run();
  out += std::string(SEPARATOR);
  out += ABCBDD::run();
  out += std::string(SEPARATOR);
  out += ABCBDE::run();
  return out;
}

}