#include "AECED.h"
#include "A/AECEDA.h"
#include "B/AECEDB.h"
#include "C/AECEDC.h"
#include "D/AECEDD.h"
#include "E/AECEDE.h"

namespace AECED {

std::string run() {
  std::string out("AECED");
  out += std::string(SEPARATOR);
  out += AECEDA::run();
  out += std::string(SEPARATOR);
  out += AECEDB::run();
  out += std::string(SEPARATOR);
  out += AECEDC::run();
  out += std::string(SEPARATOR);
  out += AECEDD::run();
  out += std::string(SEPARATOR);
  out += AECEDE::run();
  return out;
}

}