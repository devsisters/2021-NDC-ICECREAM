#include "ACBBD.h"
#include "A/ACBBDA.h"
#include "B/ACBBDB.h"
#include "C/ACBBDC.h"
#include "D/ACBBDD.h"
#include "E/ACBBDE.h"

namespace ACBBD {

std::string run() {
  std::string out("ACBBD");
  out += std::string(SEPARATOR);
  out += ACBBDA::run();
  out += std::string(SEPARATOR);
  out += ACBBDB::run();
  out += std::string(SEPARATOR);
  out += ACBBDC::run();
  out += std::string(SEPARATOR);
  out += ACBBDD::run();
  out += std::string(SEPARATOR);
  out += ACBBDE::run();
  return out;
}

}