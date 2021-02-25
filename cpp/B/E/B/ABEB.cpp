#include "ABEB.h"
#include "A/ABEBA.h"
#include "B/ABEBB.h"
#include "C/ABEBC.h"
#include "D/ABEBD.h"
#include "E/ABEBE.h"

namespace ABEB {

std::string run() {
  std::string out("ABEB");
  out += std::string(SEPARATOR);
  out += ABEBA::run();
  out += std::string(SEPARATOR);
  out += ABEBB::run();
  out += std::string(SEPARATOR);
  out += ABEBC::run();
  out += std::string(SEPARATOR);
  out += ABEBD::run();
  out += std::string(SEPARATOR);
  out += ABEBE::run();
  return out;
}

}