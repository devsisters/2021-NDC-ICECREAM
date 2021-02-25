#include "AEDAD.h"
#include "A/AEDADA.h"
#include "B/AEDADB.h"
#include "C/AEDADC.h"
#include "D/AEDADD.h"
#include "E/AEDADE.h"

namespace AEDAD {

std::string run() {
  std::string out("AEDAD");
  out += std::string(SEPARATOR);
  out += AEDADA::run();
  out += std::string(SEPARATOR);
  out += AEDADB::run();
  out += std::string(SEPARATOR);
  out += AEDADC::run();
  out += std::string(SEPARATOR);
  out += AEDADD::run();
  out += std::string(SEPARATOR);
  out += AEDADE::run();
  return out;
}

}