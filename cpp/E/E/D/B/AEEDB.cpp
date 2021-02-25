#include "AEEDB.h"
#include "A/AEEDBA.h"
#include "B/AEEDBB.h"
#include "C/AEEDBC.h"
#include "D/AEEDBD.h"
#include "E/AEEDBE.h"

namespace AEEDB {

std::string run() {
  std::string out("AEEDB");
  out += std::string(SEPARATOR);
  out += AEEDBA::run();
  out += std::string(SEPARATOR);
  out += AEEDBB::run();
  out += std::string(SEPARATOR);
  out += AEEDBC::run();
  out += std::string(SEPARATOR);
  out += AEEDBD::run();
  out += std::string(SEPARATOR);
  out += AEEDBE::run();
  return out;
}

}