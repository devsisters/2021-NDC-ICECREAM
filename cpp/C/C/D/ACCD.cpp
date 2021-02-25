#include "ACCD.h"
#include "A/ACCDA.h"
#include "B/ACCDB.h"
#include "C/ACCDC.h"
#include "D/ACCDD.h"
#include "E/ACCDE.h"

namespace ACCD {

std::string run() {
  std::string out("ACCD");
  out += std::string(SEPARATOR);
  out += ACCDA::run();
  out += std::string(SEPARATOR);
  out += ACCDB::run();
  out += std::string(SEPARATOR);
  out += ACCDC::run();
  out += std::string(SEPARATOR);
  out += ACCDD::run();
  out += std::string(SEPARATOR);
  out += ACCDE::run();
  return out;
}

}