#include "ABEBB.h"
#include "A/ABEBBA.h"
#include "B/ABEBBB.h"
#include "C/ABEBBC.h"
#include "D/ABEBBD.h"
#include "E/ABEBBE.h"

namespace ABEBB {

std::string run() {
  std::string out("ABEBB");
  out += std::string(SEPARATOR);
  out += ABEBBA::run();
  out += std::string(SEPARATOR);
  out += ABEBBB::run();
  out += std::string(SEPARATOR);
  out += ABEBBC::run();
  out += std::string(SEPARATOR);
  out += ABEBBD::run();
  out += std::string(SEPARATOR);
  out += ABEBBE::run();
  return out;
}

}