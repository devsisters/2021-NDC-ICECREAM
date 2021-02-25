#include "ABEED.h"
#include "A/ABEEDA.h"
#include "B/ABEEDB.h"
#include "C/ABEEDC.h"
#include "D/ABEEDD.h"
#include "E/ABEEDE.h"

namespace ABEED {

std::string run() {
  std::string out("ABEED");
  out += std::string(SEPARATOR);
  out += ABEEDA::run();
  out += std::string(SEPARATOR);
  out += ABEEDB::run();
  out += std::string(SEPARATOR);
  out += ABEEDC::run();
  out += std::string(SEPARATOR);
  out += ABEEDD::run();
  out += std::string(SEPARATOR);
  out += ABEEDE::run();
  return out;
}

}