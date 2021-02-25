#include "ADDB.h"
#include "A/ADDBA.h"
#include "B/ADDBB.h"
#include "C/ADDBC.h"
#include "D/ADDBD.h"
#include "E/ADDBE.h"

namespace ADDB {

std::string run() {
  std::string out("ADDB");
  out += std::string(SEPARATOR);
  out += ADDBA::run();
  out += std::string(SEPARATOR);
  out += ADDBB::run();
  out += std::string(SEPARATOR);
  out += ADDBC::run();
  out += std::string(SEPARATOR);
  out += ADDBD::run();
  out += std::string(SEPARATOR);
  out += ADDBE::run();
  return out;
}

}