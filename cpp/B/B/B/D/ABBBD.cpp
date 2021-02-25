#include "ABBBD.h"
#include "A/ABBBDA.h"
#include "B/ABBBDB.h"
#include "C/ABBBDC.h"
#include "D/ABBBDD.h"
#include "E/ABBBDE.h"

namespace ABBBD {

std::string run() {
  std::string out("ABBBD");
  out += std::string(SEPARATOR);
  out += ABBBDA::run();
  out += std::string(SEPARATOR);
  out += ABBBDB::run();
  out += std::string(SEPARATOR);
  out += ABBBDC::run();
  out += std::string(SEPARATOR);
  out += ABBBDD::run();
  out += std::string(SEPARATOR);
  out += ABBBDE::run();
  return out;
}

}