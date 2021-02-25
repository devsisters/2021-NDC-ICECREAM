#include "AEEED.h"
#include "A/AEEEDA.h"
#include "B/AEEEDB.h"
#include "C/AEEEDC.h"
#include "D/AEEEDD.h"
#include "E/AEEEDE.h"

namespace AEEED {

std::string run() {
  std::string out("AEEED");
  out += std::string(SEPARATOR);
  out += AEEEDA::run();
  out += std::string(SEPARATOR);
  out += AEEEDB::run();
  out += std::string(SEPARATOR);
  out += AEEEDC::run();
  out += std::string(SEPARATOR);
  out += AEEEDD::run();
  out += std::string(SEPARATOR);
  out += AEEEDE::run();
  return out;
}

}