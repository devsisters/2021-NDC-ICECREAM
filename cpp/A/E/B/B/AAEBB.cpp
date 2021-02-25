#include "AAEBB.h"
#include "A/AAEBBA.h"
#include "B/AAEBBB.h"
#include "C/AAEBBC.h"
#include "D/AAEBBD.h"
#include "E/AAEBBE.h"

namespace AAEBB {

std::string run() {
  std::string out("AAEBB");
  out += std::string(SEPARATOR);
  out += AAEBBA::run();
  out += std::string(SEPARATOR);
  out += AAEBBB::run();
  out += std::string(SEPARATOR);
  out += AAEBBC::run();
  out += std::string(SEPARATOR);
  out += AAEBBD::run();
  out += std::string(SEPARATOR);
  out += AAEBBE::run();
  return out;
}

}