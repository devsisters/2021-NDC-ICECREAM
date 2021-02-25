#include "AEAD.h"
#include "A/AEADA.h"
#include "B/AEADB.h"
#include "C/AEADC.h"
#include "D/AEADD.h"
#include "E/AEADE.h"

namespace AEAD {

std::string run() {
  std::string out("AEAD");
  out += std::string(SEPARATOR);
  out += AEADA::run();
  out += std::string(SEPARATOR);
  out += AEADB::run();
  out += std::string(SEPARATOR);
  out += AEADC::run();
  out += std::string(SEPARATOR);
  out += AEADD::run();
  out += std::string(SEPARATOR);
  out += AEADE::run();
  return out;
}

}