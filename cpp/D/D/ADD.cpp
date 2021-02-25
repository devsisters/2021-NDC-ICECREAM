#include "ADD.h"
#include "A/ADDA.h"
#include "B/ADDB.h"
#include "C/ADDC.h"
#include "D/ADDD.h"
#include "E/ADDE.h"

namespace ADD {

std::string run() {
  std::string out("ADD");
  out += std::string(SEPARATOR);
  out += ADDA::run();
  out += std::string(SEPARATOR);
  out += ADDB::run();
  out += std::string(SEPARATOR);
  out += ADDC::run();
  out += std::string(SEPARATOR);
  out += ADDD::run();
  out += std::string(SEPARATOR);
  out += ADDE::run();
  return out;
}

}