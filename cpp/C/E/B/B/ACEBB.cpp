#include "ACEBB.h"
#include "A/ACEBBA.h"
#include "B/ACEBBB.h"
#include "C/ACEBBC.h"
#include "D/ACEBBD.h"
#include "E/ACEBBE.h"

namespace ACEBB {

std::string run() {
  std::string out("ACEBB");
  out += std::string(SEPARATOR);
  out += ACEBBA::run();
  out += std::string(SEPARATOR);
  out += ACEBBB::run();
  out += std::string(SEPARATOR);
  out += ACEBBC::run();
  out += std::string(SEPARATOR);
  out += ACEBBD::run();
  out += std::string(SEPARATOR);
  out += ACEBBE::run();
  return out;
}

}