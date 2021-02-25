#include "AADDB.h"
#include "A/AADDBA.h"
#include "B/AADDBB.h"
#include "C/AADDBC.h"
#include "D/AADDBD.h"
#include "E/AADDBE.h"

namespace AADDB {

std::string run() {
  std::string out("AADDB");
  out += std::string(SEPARATOR);
  out += AADDBA::run();
  out += std::string(SEPARATOR);
  out += AADDBB::run();
  out += std::string(SEPARATOR);
  out += AADDBC::run();
  out += std::string(SEPARATOR);
  out += AADDBD::run();
  out += std::string(SEPARATOR);
  out += AADDBE::run();
  return out;
}

}