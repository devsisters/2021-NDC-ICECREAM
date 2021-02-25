#include "ACAEB.h"
#include "A/ACAEBA.h"
#include "B/ACAEBB.h"
#include "C/ACAEBC.h"
#include "D/ACAEBD.h"
#include "E/ACAEBE.h"

namespace ACAEB {

std::string run() {
  std::string out("ACAEB");
  out += std::string(SEPARATOR);
  out += ACAEBA::run();
  out += std::string(SEPARATOR);
  out += ACAEBB::run();
  out += std::string(SEPARATOR);
  out += ACAEBC::run();
  out += std::string(SEPARATOR);
  out += ACAEBD::run();
  out += std::string(SEPARATOR);
  out += ACAEBE::run();
  return out;
}

}