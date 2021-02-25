#include "AEEBD.h"
#include "A/AEEBDA.h"
#include "B/AEEBDB.h"
#include "C/AEEBDC.h"
#include "D/AEEBDD.h"
#include "E/AEEBDE.h"

namespace AEEBD {

std::string run() {
  std::string out("AEEBD");
  out += std::string(SEPARATOR);
  out += AEEBDA::run();
  out += std::string(SEPARATOR);
  out += AEEBDB::run();
  out += std::string(SEPARATOR);
  out += AEEBDC::run();
  out += std::string(SEPARATOR);
  out += AEEBDD::run();
  out += std::string(SEPARATOR);
  out += AEEBDE::run();
  return out;
}

}