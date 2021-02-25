#include "ABAD.h"
#include "A/ABADA.h"
#include "B/ABADB.h"
#include "C/ABADC.h"
#include "D/ABADD.h"
#include "E/ABADE.h"

namespace ABAD {

std::string run() {
  std::string out("ABAD");
  out += std::string(SEPARATOR);
  out += ABADA::run();
  out += std::string(SEPARATOR);
  out += ABADB::run();
  out += std::string(SEPARATOR);
  out += ABADC::run();
  out += std::string(SEPARATOR);
  out += ABADD::run();
  out += std::string(SEPARATOR);
  out += ABADE::run();
  return out;
}

}