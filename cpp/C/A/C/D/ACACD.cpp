#include "ACACD.h"
#include "A/ACACDA.h"
#include "B/ACACDB.h"
#include "C/ACACDC.h"
#include "D/ACACDD.h"
#include "E/ACACDE.h"

namespace ACACD {

std::string run() {
  std::string out("ACACD");
  out += std::string(SEPARATOR);
  out += ACACDA::run();
  out += std::string(SEPARATOR);
  out += ACACDB::run();
  out += std::string(SEPARATOR);
  out += ACACDC::run();
  out += std::string(SEPARATOR);
  out += ACACDD::run();
  out += std::string(SEPARATOR);
  out += ACACDE::run();
  return out;
}

}