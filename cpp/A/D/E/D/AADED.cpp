#include "AADED.h"
#include "A/AADEDA.h"
#include "B/AADEDB.h"
#include "C/AADEDC.h"
#include "D/AADEDD.h"
#include "E/AADEDE.h"

namespace AADED {

std::string run() {
  std::string out("AADED");
  out += std::string(SEPARATOR);
  out += AADEDA::run();
  out += std::string(SEPARATOR);
  out += AADEDB::run();
  out += std::string(SEPARATOR);
  out += AADEDC::run();
  out += std::string(SEPARATOR);
  out += AADEDD::run();
  out += std::string(SEPARATOR);
  out += AADEDE::run();
  return out;
}

}