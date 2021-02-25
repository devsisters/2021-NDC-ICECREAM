#include "ACBAD.h"
#include "A/ACBADA.h"
#include "B/ACBADB.h"
#include "C/ACBADC.h"
#include "D/ACBADD.h"
#include "E/ACBADE.h"

namespace ACBAD {

std::string run() {
  std::string out("ACBAD");
  out += std::string(SEPARATOR);
  out += ACBADA::run();
  out += std::string(SEPARATOR);
  out += ACBADB::run();
  out += std::string(SEPARATOR);
  out += ACBADC::run();
  out += std::string(SEPARATOR);
  out += ACBADD::run();
  out += std::string(SEPARATOR);
  out += ACBADE::run();
  return out;
}

}