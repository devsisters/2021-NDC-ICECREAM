#include "AEEAD.h"
#include "A/AEEADA.h"
#include "B/AEEADB.h"
#include "C/AEEADC.h"
#include "D/AEEADD.h"
#include "E/AEEADE.h"

namespace AEEAD {

std::string run() {
  std::string out("AEEAD");
  out += std::string(SEPARATOR);
  out += AEEADA::run();
  out += std::string(SEPARATOR);
  out += AEEADB::run();
  out += std::string(SEPARATOR);
  out += AEEADC::run();
  out += std::string(SEPARATOR);
  out += AEEADD::run();
  out += std::string(SEPARATOR);
  out += AEEADE::run();
  return out;
}

}