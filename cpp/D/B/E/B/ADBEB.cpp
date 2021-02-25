#include "ADBEB.h"
#include "A/ADBEBA.h"
#include "B/ADBEBB.h"
#include "C/ADBEBC.h"
#include "D/ADBEBD.h"
#include "E/ADBEBE.h"

namespace ADBEB {

std::string run() {
  std::string out("ADBEB");
  out += std::string(SEPARATOR);
  out += ADBEBA::run();
  out += std::string(SEPARATOR);
  out += ADBEBB::run();
  out += std::string(SEPARATOR);
  out += ADBEBC::run();
  out += std::string(SEPARATOR);
  out += ADBEBD::run();
  out += std::string(SEPARATOR);
  out += ADBEBE::run();
  return out;
}

}