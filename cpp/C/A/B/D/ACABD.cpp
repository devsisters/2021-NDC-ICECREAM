#include "ACABD.h"
#include "A/ACABDA.h"
#include "B/ACABDB.h"
#include "C/ACABDC.h"
#include "D/ACABDD.h"
#include "E/ACABDE.h"

namespace ACABD {

std::string run() {
  std::string out("ACABD");
  out += std::string(SEPARATOR);
  out += ACABDA::run();
  out += std::string(SEPARATOR);
  out += ACABDB::run();
  out += std::string(SEPARATOR);
  out += ACABDC::run();
  out += std::string(SEPARATOR);
  out += ACABDD::run();
  out += std::string(SEPARATOR);
  out += ACABDE::run();
  return out;
}

}