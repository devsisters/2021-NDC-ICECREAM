#include "AEDDB.h"
#include "A/AEDDBA.h"
#include "B/AEDDBB.h"
#include "C/AEDDBC.h"
#include "D/AEDDBD.h"
#include "E/AEDDBE.h"

namespace AEDDB {

std::string run() {
  std::string out("AEDDB");
  out += std::string(SEPARATOR);
  out += AEDDBA::run();
  out += std::string(SEPARATOR);
  out += AEDDBB::run();
  out += std::string(SEPARATOR);
  out += AEDDBC::run();
  out += std::string(SEPARATOR);
  out += AEDDBD::run();
  out += std::string(SEPARATOR);
  out += AEDDBE::run();
  return out;
}

}