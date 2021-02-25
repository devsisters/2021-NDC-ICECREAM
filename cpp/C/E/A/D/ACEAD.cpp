#include "ACEAD.h"
#include "A/ACEADA.h"
#include "B/ACEADB.h"
#include "C/ACEADC.h"
#include "D/ACEADD.h"
#include "E/ACEADE.h"

namespace ACEAD {

std::string run() {
  std::string out("ACEAD");
  out += std::string(SEPARATOR);
  out += ACEADA::run();
  out += std::string(SEPARATOR);
  out += ACEADB::run();
  out += std::string(SEPARATOR);
  out += ACEADC::run();
  out += std::string(SEPARATOR);
  out += ACEADD::run();
  out += std::string(SEPARATOR);
  out += ACEADE::run();
  return out;
}

}