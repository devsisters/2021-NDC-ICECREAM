#include "AEED.h"
#include "A/AEEDA.h"
#include "B/AEEDB.h"
#include "C/AEEDC.h"
#include "D/AEEDD.h"
#include "E/AEEDE.h"

namespace AEED {

std::string run() {
  std::string out("AEED");
  out += std::string(SEPARATOR);
  out += AEEDA::run();
  out += std::string(SEPARATOR);
  out += AEEDB::run();
  out += std::string(SEPARATOR);
  out += AEEDC::run();
  out += std::string(SEPARATOR);
  out += AEEDD::run();
  out += std::string(SEPARATOR);
  out += AEEDE::run();
  return out;
}

}