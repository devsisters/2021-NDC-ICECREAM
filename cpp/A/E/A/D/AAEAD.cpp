#include "AAEAD.h"
#include "A/AAEADA.h"
#include "B/AAEADB.h"
#include "C/AAEADC.h"
#include "D/AAEADD.h"
#include "E/AAEADE.h"

namespace AAEAD {

std::string run() {
  std::string out("AAEAD");
  out += std::string(SEPARATOR);
  out += AAEADA::run();
  out += std::string(SEPARATOR);
  out += AAEADB::run();
  out += std::string(SEPARATOR);
  out += AAEADC::run();
  out += std::string(SEPARATOR);
  out += AAEADD::run();
  out += std::string(SEPARATOR);
  out += AAEADE::run();
  return out;
}

}