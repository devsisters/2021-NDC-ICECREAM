#include "AAEBD.h"
#include "A/AAEBDA.h"
#include "B/AAEBDB.h"
#include "C/AAEBDC.h"
#include "D/AAEBDD.h"
#include "E/AAEBDE.h"

namespace AAEBD {

std::string run() {
  std::string out("AAEBD");
  out += std::string(SEPARATOR);
  out += AAEBDA::run();
  out += std::string(SEPARATOR);
  out += AAEBDB::run();
  out += std::string(SEPARATOR);
  out += AAEBDC::run();
  out += std::string(SEPARATOR);
  out += AAEBDD::run();
  out += std::string(SEPARATOR);
  out += AAEBDE::run();
  return out;
}

}