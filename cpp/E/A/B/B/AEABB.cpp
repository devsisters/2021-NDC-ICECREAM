#include "AEABB.h"
#include "A/AEABBA.h"
#include "B/AEABBB.h"
#include "C/AEABBC.h"
#include "D/AEABBD.h"
#include "E/AEABBE.h"

namespace AEABB {

std::string run() {
  std::string out("AEABB");
  out += std::string(SEPARATOR);
  out += AEABBA::run();
  out += std::string(SEPARATOR);
  out += AEABBB::run();
  out += std::string(SEPARATOR);
  out += AEABBC::run();
  out += std::string(SEPARATOR);
  out += AEABBD::run();
  out += std::string(SEPARATOR);
  out += AEABBE::run();
  return out;
}

}