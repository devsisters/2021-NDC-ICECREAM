#include "AEDBD.h"
#include "A/AEDBDA.h"
#include "B/AEDBDB.h"
#include "C/AEDBDC.h"
#include "D/AEDBDD.h"
#include "E/AEDBDE.h"

namespace AEDBD {

std::string run() {
  std::string out("AEDBD");
  out += std::string(SEPARATOR);
  out += AEDBDA::run();
  out += std::string(SEPARATOR);
  out += AEDBDB::run();
  out += std::string(SEPARATOR);
  out += AEDBDC::run();
  out += std::string(SEPARATOR);
  out += AEDBDD::run();
  out += std::string(SEPARATOR);
  out += AEDBDE::run();
  return out;
}

}