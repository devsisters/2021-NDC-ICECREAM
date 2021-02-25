#include "ABAAD.h"
#include "A/ABAADA.h"
#include "B/ABAADB.h"
#include "C/ABAADC.h"
#include "D/ABAADD.h"
#include "E/ABAADE.h"

namespace ABAAD {

std::string run() {
  std::string out("ABAAD");
  out += std::string(SEPARATOR);
  out += ABAADA::run();
  out += std::string(SEPARATOR);
  out += ABAADB::run();
  out += std::string(SEPARATOR);
  out += ABAADC::run();
  out += std::string(SEPARATOR);
  out += ABAADD::run();
  out += std::string(SEPARATOR);
  out += ABAADE::run();
  return out;
}

}