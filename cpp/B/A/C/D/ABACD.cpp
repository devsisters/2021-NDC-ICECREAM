#include "ABACD.h"
#include "A/ABACDA.h"
#include "B/ABACDB.h"
#include "C/ABACDC.h"
#include "D/ABACDD.h"
#include "E/ABACDE.h"

namespace ABACD {

std::string run() {
  std::string out("ABACD");
  out += std::string(SEPARATOR);
  out += ABACDA::run();
  out += std::string(SEPARATOR);
  out += ABACDB::run();
  out += std::string(SEPARATOR);
  out += ABACDC::run();
  out += std::string(SEPARATOR);
  out += ABACDD::run();
  out += std::string(SEPARATOR);
  out += ABACDE::run();
  return out;
}

}