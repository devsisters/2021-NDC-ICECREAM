#include "AEDB.h"
#include "A/AEDBA.h"
#include "B/AEDBB.h"
#include "C/AEDBC.h"
#include "D/AEDBD.h"
#include "E/AEDBE.h"

namespace AEDB {

std::string run() {
  std::string out("AEDB");
  out += std::string(SEPARATOR);
  out += AEDBA::run();
  out += std::string(SEPARATOR);
  out += AEDBB::run();
  out += std::string(SEPARATOR);
  out += AEDBC::run();
  out += std::string(SEPARATOR);
  out += AEDBD::run();
  out += std::string(SEPARATOR);
  out += AEDBE::run();
  return out;
}

}