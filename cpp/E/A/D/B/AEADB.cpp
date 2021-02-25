#include "AEADB.h"
#include "A/AEADBA.h"
#include "B/AEADBB.h"
#include "C/AEADBC.h"
#include "D/AEADBD.h"
#include "E/AEADBE.h"

namespace AEADB {

std::string run() {
  std::string out("AEADB");
  out += std::string(SEPARATOR);
  out += AEADBA::run();
  out += std::string(SEPARATOR);
  out += AEADBB::run();
  out += std::string(SEPARATOR);
  out += AEADBC::run();
  out += std::string(SEPARATOR);
  out += AEADBD::run();
  out += std::string(SEPARATOR);
  out += AEADBE::run();
  return out;
}

}