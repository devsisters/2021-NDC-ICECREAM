#include "ABEBD.h"
#include "A/ABEBDA.h"
#include "B/ABEBDB.h"
#include "C/ABEBDC.h"
#include "D/ABEBDD.h"
#include "E/ABEBDE.h"

namespace ABEBD {

std::string run() {
  std::string out("ABEBD");
  out += std::string(SEPARATOR);
  out += ABEBDA::run();
  out += std::string(SEPARATOR);
  out += ABEBDB::run();
  out += std::string(SEPARATOR);
  out += ABEBDC::run();
  out += std::string(SEPARATOR);
  out += ABEBDD::run();
  out += std::string(SEPARATOR);
  out += ABEBDE::run();
  return out;
}

}