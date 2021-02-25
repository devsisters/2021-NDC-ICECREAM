#include "AAEED.h"
#include "A/AAEEDA.h"
#include "B/AAEEDB.h"
#include "C/AAEEDC.h"
#include "D/AAEEDD.h"
#include "E/AAEEDE.h"

namespace AAEED {

std::string run() {
  std::string out("AAEED");
  out += std::string(SEPARATOR);
  out += AAEEDA::run();
  out += std::string(SEPARATOR);
  out += AAEEDB::run();
  out += std::string(SEPARATOR);
  out += AAEEDC::run();
  out += std::string(SEPARATOR);
  out += AAEEDD::run();
  out += std::string(SEPARATOR);
  out += AAEEDE::run();
  return out;
}

}