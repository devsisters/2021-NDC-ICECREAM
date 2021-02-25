#include "ADBED.h"
#include "A/ADBEDA.h"
#include "B/ADBEDB.h"
#include "C/ADBEDC.h"
#include "D/ADBEDD.h"
#include "E/ADBEDE.h"

namespace ADBED {

std::string run() {
  std::string out("ADBED");
  out += std::string(SEPARATOR);
  out += ADBEDA::run();
  out += std::string(SEPARATOR);
  out += ADBEDB::run();
  out += std::string(SEPARATOR);
  out += ADBEDC::run();
  out += std::string(SEPARATOR);
  out += ADBEDD::run();
  out += std::string(SEPARATOR);
  out += ADBEDE::run();
  return out;
}

}