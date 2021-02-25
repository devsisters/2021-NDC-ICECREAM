#include "AED.h"
#include "A/AEDA.h"
#include "B/AEDB.h"
#include "C/AEDC.h"
#include "D/AEDD.h"
#include "E/AEDE.h"

namespace AED {

std::string run() {
  std::string out("AED");
  out += std::string(SEPARATOR);
  out += AEDA::run();
  out += std::string(SEPARATOR);
  out += AEDB::run();
  out += std::string(SEPARATOR);
  out += AEDC::run();
  out += std::string(SEPARATOR);
  out += AEDD::run();
  out += std::string(SEPARATOR);
  out += AEDE::run();
  return out;
}

}