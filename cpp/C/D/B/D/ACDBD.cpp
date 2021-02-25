#include "ACDBD.h"
#include "A/ACDBDA.h"
#include "B/ACDBDB.h"
#include "C/ACDBDC.h"
#include "D/ACDBDD.h"
#include "E/ACDBDE.h"

namespace ACDBD {

std::string run() {
  std::string out("ACDBD");
  out += std::string(SEPARATOR);
  out += ACDBDA::run();
  out += std::string(SEPARATOR);
  out += ACDBDB::run();
  out += std::string(SEPARATOR);
  out += ACDBDC::run();
  out += std::string(SEPARATOR);
  out += ACDBDD::run();
  out += std::string(SEPARATOR);
  out += ACDBDE::run();
  return out;
}

}