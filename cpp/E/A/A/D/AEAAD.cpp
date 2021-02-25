#include "AEAAD.h"
#include "A/AEAADA.h"
#include "B/AEAADB.h"
#include "C/AEAADC.h"
#include "D/AEAADD.h"
#include "E/AEAADE.h"

namespace AEAAD {

std::string run() {
  std::string out("AEAAD");
  out += std::string(SEPARATOR);
  out += AEAADA::run();
  out += std::string(SEPARATOR);
  out += AEAADB::run();
  out += std::string(SEPARATOR);
  out += AEAADC::run();
  out += std::string(SEPARATOR);
  out += AEAADD::run();
  out += std::string(SEPARATOR);
  out += AEAADE::run();
  return out;
}

}