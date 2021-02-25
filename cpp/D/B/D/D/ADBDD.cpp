#include "ADBDD.h"
#include "A/ADBDDA.h"
#include "B/ADBDDB.h"
#include "C/ADBDDC.h"
#include "D/ADBDDD.h"
#include "E/ADBDDE.h"

namespace ADBDD {

std::string run() {
  std::string out("ADBDD");
  out += std::string(SEPARATOR);
  out += ADBDDA::run();
  out += std::string(SEPARATOR);
  out += ADBDDB::run();
  out += std::string(SEPARATOR);
  out += ADBDDC::run();
  out += std::string(SEPARATOR);
  out += ADBDDD::run();
  out += std::string(SEPARATOR);
  out += ADBDDE::run();
  return out;
}

}