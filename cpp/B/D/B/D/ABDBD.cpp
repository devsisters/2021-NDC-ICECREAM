#include "ABDBD.h"
#include "A/ABDBDA.h"
#include "B/ABDBDB.h"
#include "C/ABDBDC.h"
#include "D/ABDBDD.h"
#include "E/ABDBDE.h"

namespace ABDBD {

std::string run() {
  std::string out("ABDBD");
  out += std::string(SEPARATOR);
  out += ABDBDA::run();
  out += std::string(SEPARATOR);
  out += ABDBDB::run();
  out += std::string(SEPARATOR);
  out += ABDBDC::run();
  out += std::string(SEPARATOR);
  out += ABDBDD::run();
  out += std::string(SEPARATOR);
  out += ABDBDE::run();
  return out;
}

}