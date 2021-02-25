#include "AEBD.h"
#include "A/AEBDA.h"
#include "B/AEBDB.h"
#include "C/AEBDC.h"
#include "D/AEBDD.h"
#include "E/AEBDE.h"

namespace AEBD {

std::string run() {
  std::string out("AEBD");
  out += std::string(SEPARATOR);
  out += AEBDA::run();
  out += std::string(SEPARATOR);
  out += AEBDB::run();
  out += std::string(SEPARATOR);
  out += AEBDC::run();
  out += std::string(SEPARATOR);
  out += AEBDD::run();
  out += std::string(SEPARATOR);
  out += AEBDE::run();
  return out;
}

}