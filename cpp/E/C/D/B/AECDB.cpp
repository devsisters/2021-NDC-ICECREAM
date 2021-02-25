#include "AECDB.h"
#include "A/AECDBA.h"
#include "B/AECDBB.h"
#include "C/AECDBC.h"
#include "D/AECDBD.h"
#include "E/AECDBE.h"

namespace AECDB {

std::string run() {
  std::string out("AECDB");
  out += std::string(SEPARATOR);
  out += AECDBA::run();
  out += std::string(SEPARATOR);
  out += AECDBB::run();
  out += std::string(SEPARATOR);
  out += AECDBC::run();
  out += std::string(SEPARATOR);
  out += AECDBD::run();
  out += std::string(SEPARATOR);
  out += AECDBE::run();
  return out;
}

}