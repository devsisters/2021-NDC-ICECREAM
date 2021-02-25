#include "ADBDB.h"
#include "A/ADBDBA.h"
#include "B/ADBDBB.h"
#include "C/ADBDBC.h"
#include "D/ADBDBD.h"
#include "E/ADBDBE.h"

namespace ADBDB {

std::string run() {
  std::string out("ADBDB");
  out += std::string(SEPARATOR);
  out += ADBDBA::run();
  out += std::string(SEPARATOR);
  out += ADBDBB::run();
  out += std::string(SEPARATOR);
  out += ADBDBC::run();
  out += std::string(SEPARATOR);
  out += ADBDBD::run();
  out += std::string(SEPARATOR);
  out += ADBDBE::run();
  return out;
}

}