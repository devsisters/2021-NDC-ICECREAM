#include "AEBBD.h"
#include "A/AEBBDA.h"
#include "B/AEBBDB.h"
#include "C/AEBBDC.h"
#include "D/AEBBDD.h"
#include "E/AEBBDE.h"

namespace AEBBD {

std::string run() {
  std::string out("AEBBD");
  out += std::string(SEPARATOR);
  out += AEBBDA::run();
  out += std::string(SEPARATOR);
  out += AEBBDB::run();
  out += std::string(SEPARATOR);
  out += AEBBDC::run();
  out += std::string(SEPARATOR);
  out += AEBBDD::run();
  out += std::string(SEPARATOR);
  out += AEBBDE::run();
  return out;
}

}