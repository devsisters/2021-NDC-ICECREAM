#include "AEBAD.h"
#include "A/AEBADA.h"
#include "B/AEBADB.h"
#include "C/AEBADC.h"
#include "D/AEBADD.h"
#include "E/AEBADE.h"

namespace AEBAD {

std::string run() {
  std::string out("AEBAD");
  out += std::string(SEPARATOR);
  out += AEBADA::run();
  out += std::string(SEPARATOR);
  out += AEBADB::run();
  out += std::string(SEPARATOR);
  out += AEBADC::run();
  out += std::string(SEPARATOR);
  out += AEBADD::run();
  out += std::string(SEPARATOR);
  out += AEBADE::run();
  return out;
}

}