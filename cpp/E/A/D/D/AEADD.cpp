#include "AEADD.h"
#include "A/AEADDA.h"
#include "B/AEADDB.h"
#include "C/AEADDC.h"
#include "D/AEADDD.h"
#include "E/AEADDE.h"

namespace AEADD {

std::string run() {
  std::string out("AEADD");
  out += std::string(SEPARATOR);
  out += AEADDA::run();
  out += std::string(SEPARATOR);
  out += AEADDB::run();
  out += std::string(SEPARATOR);
  out += AEADDC::run();
  out += std::string(SEPARATOR);
  out += AEADDD::run();
  out += std::string(SEPARATOR);
  out += AEADDE::run();
  return out;
}

}