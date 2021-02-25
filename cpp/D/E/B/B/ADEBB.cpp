#include "ADEBB.h"
#include "A/ADEBBA.h"
#include "B/ADEBBB.h"
#include "C/ADEBBC.h"
#include "D/ADEBBD.h"
#include "E/ADEBBE.h"

namespace ADEBB {

std::string run() {
  std::string out("ADEBB");
  out += std::string(SEPARATOR);
  out += ADEBBA::run();
  out += std::string(SEPARATOR);
  out += ADEBBB::run();
  out += std::string(SEPARATOR);
  out += ADEBBC::run();
  out += std::string(SEPARATOR);
  out += ADEBBD::run();
  out += std::string(SEPARATOR);
  out += ADEBBE::run();
  return out;
}

}