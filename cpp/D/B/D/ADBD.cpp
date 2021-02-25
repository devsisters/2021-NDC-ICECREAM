#include "ADBD.h"
#include "A/ADBDA.h"
#include "B/ADBDB.h"
#include "C/ADBDC.h"
#include "D/ADBDD.h"
#include "E/ADBDE.h"

namespace ADBD {

std::string run() {
  std::string out("ADBD");
  out += std::string(SEPARATOR);
  out += ADBDA::run();
  out += std::string(SEPARATOR);
  out += ADBDB::run();
  out += std::string(SEPARATOR);
  out += ADBDC::run();
  out += std::string(SEPARATOR);
  out += ADBDD::run();
  out += std::string(SEPARATOR);
  out += ADBDE::run();
  return out;
}

}