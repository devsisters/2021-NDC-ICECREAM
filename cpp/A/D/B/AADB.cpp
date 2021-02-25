#include "AADB.h"
#include "A/AADBA.h"
#include "B/AADBB.h"
#include "C/AADBC.h"
#include "D/AADBD.h"
#include "E/AADBE.h"

namespace AADB {

std::string run() {
  std::string out("AADB");
  out += std::string(SEPARATOR);
  out += AADBA::run();
  out += std::string(SEPARATOR);
  out += AADBB::run();
  out += std::string(SEPARATOR);
  out += AADBC::run();
  out += std::string(SEPARATOR);
  out += AADBD::run();
  out += std::string(SEPARATOR);
  out += AADBE::run();
  return out;
}

}