#include "AEEDD.h"
#include "A/AEEDDA.h"
#include "B/AEEDDB.h"
#include "C/AEEDDC.h"
#include "D/AEEDDD.h"
#include "E/AEEDDE.h"

namespace AEEDD {

std::string run() {
  std::string out("AEEDD");
  out += std::string(SEPARATOR);
  out += AEEDDA::run();
  out += std::string(SEPARATOR);
  out += AEEDDB::run();
  out += std::string(SEPARATOR);
  out += AEEDDC::run();
  out += std::string(SEPARATOR);
  out += AEEDDD::run();
  out += std::string(SEPARATOR);
  out += AEEDDE::run();
  return out;
}

}