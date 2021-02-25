#include "AABAD.h"
#include "A/AABADA.h"
#include "B/AABADB.h"
#include "C/AABADC.h"
#include "D/AABADD.h"
#include "E/AABADE.h"

namespace AABAD {

std::string run() {
  std::string out("AABAD");
  out += std::string(SEPARATOR);
  out += AABADA::run();
  out += std::string(SEPARATOR);
  out += AABADB::run();
  out += std::string(SEPARATOR);
  out += AABADC::run();
  out += std::string(SEPARATOR);
  out += AABADD::run();
  out += std::string(SEPARATOR);
  out += AABADE::run();
  return out;
}

}