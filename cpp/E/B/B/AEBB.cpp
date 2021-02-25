#include "AEBB.h"
#include "A/AEBBA.h"
#include "B/AEBBB.h"
#include "C/AEBBC.h"
#include "D/AEBBD.h"
#include "E/AEBBE.h"

namespace AEBB {

std::string run() {
  std::string out("AEBB");
  out += std::string(SEPARATOR);
  out += AEBBA::run();
  out += std::string(SEPARATOR);
  out += AEBBB::run();
  out += std::string(SEPARATOR);
  out += AEBBC::run();
  out += std::string(SEPARATOR);
  out += AEBBD::run();
  out += std::string(SEPARATOR);
  out += AEBBE::run();
  return out;
}

}