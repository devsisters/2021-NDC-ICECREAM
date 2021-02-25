#include "ADED.h"
#include "A/ADEDA.h"
#include "B/ADEDB.h"
#include "C/ADEDC.h"
#include "D/ADEDD.h"
#include "E/ADEDE.h"

namespace ADED {

std::string run() {
  std::string out("ADED");
  out += std::string(SEPARATOR);
  out += ADEDA::run();
  out += std::string(SEPARATOR);
  out += ADEDB::run();
  out += std::string(SEPARATOR);
  out += ADEDC::run();
  out += std::string(SEPARATOR);
  out += ADEDD::run();
  out += std::string(SEPARATOR);
  out += ADEDE::run();
  return out;
}

}