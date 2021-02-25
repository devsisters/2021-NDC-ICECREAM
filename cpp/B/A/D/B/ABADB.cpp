#include "ABADB.h"
#include "A/ABADBA.h"
#include "B/ABADBB.h"
#include "C/ABADBC.h"
#include "D/ABADBD.h"
#include "E/ABADBE.h"

namespace ABADB {

std::string run() {
  std::string out("ABADB");
  out += std::string(SEPARATOR);
  out += ABADBA::run();
  out += std::string(SEPARATOR);
  out += ABADBB::run();
  out += std::string(SEPARATOR);
  out += ABADBC::run();
  out += std::string(SEPARATOR);
  out += ABADBD::run();
  out += std::string(SEPARATOR);
  out += ABADBE::run();
  return out;
}

}