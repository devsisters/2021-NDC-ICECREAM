#include "ADEBD.h"
#include "A/ADEBDA.h"
#include "B/ADEBDB.h"
#include "C/ADEBDC.h"
#include "D/ADEBDD.h"
#include "E/ADEBDE.h"

namespace ADEBD {

std::string run() {
  std::string out("ADEBD");
  out += std::string(SEPARATOR);
  out += ADEBDA::run();
  out += std::string(SEPARATOR);
  out += ADEBDB::run();
  out += std::string(SEPARATOR);
  out += ADEBDC::run();
  out += std::string(SEPARATOR);
  out += ADEBDD::run();
  out += std::string(SEPARATOR);
  out += ADEBDE::run();
  return out;
}

}