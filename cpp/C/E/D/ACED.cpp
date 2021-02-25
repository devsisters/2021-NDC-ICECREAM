#include "ACED.h"
#include "A/ACEDA.h"
#include "B/ACEDB.h"
#include "C/ACEDC.h"
#include "D/ACEDD.h"
#include "E/ACEDE.h"

namespace ACED {

std::string run() {
  std::string out("ACED");
  out += std::string(SEPARATOR);
  out += ACEDA::run();
  out += std::string(SEPARATOR);
  out += ACEDB::run();
  out += std::string(SEPARATOR);
  out += ACEDC::run();
  out += std::string(SEPARATOR);
  out += ACEDD::run();
  out += std::string(SEPARATOR);
  out += ACEDE::run();
  return out;
}

}