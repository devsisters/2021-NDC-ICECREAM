#include "AEEBB.h"
#include "A/AEEBBA.h"
#include "B/AEEBBB.h"
#include "C/AEEBBC.h"
#include "D/AEEBBD.h"
#include "E/AEEBBE.h"

namespace AEEBB {

std::string run() {
  std::string out("AEEBB");
  out += std::string(SEPARATOR);
  out += AEEBBA::run();
  out += std::string(SEPARATOR);
  out += AEEBBB::run();
  out += std::string(SEPARATOR);
  out += AEEBBC::run();
  out += std::string(SEPARATOR);
  out += AEEBBD::run();
  out += std::string(SEPARATOR);
  out += AEEBBE::run();
  return out;
}

}