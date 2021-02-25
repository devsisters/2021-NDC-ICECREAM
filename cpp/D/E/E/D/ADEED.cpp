#include "ADEED.h"
#include "A/ADEEDA.h"
#include "B/ADEEDB.h"
#include "C/ADEEDC.h"
#include "D/ADEEDD.h"
#include "E/ADEEDE.h"

namespace ADEED {

std::string run() {
  std::string out("ADEED");
  out += std::string(SEPARATOR);
  out += ADEEDA::run();
  out += std::string(SEPARATOR);
  out += ADEEDB::run();
  out += std::string(SEPARATOR);
  out += ADEEDC::run();
  out += std::string(SEPARATOR);
  out += ADEEDD::run();
  out += std::string(SEPARATOR);
  out += ADEEDE::run();
  return out;
}

}