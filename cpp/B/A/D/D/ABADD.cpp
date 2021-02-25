#include "ABADD.h"
#include "A/ABADDA.h"
#include "B/ABADDB.h"
#include "C/ABADDC.h"
#include "D/ABADDD.h"
#include "E/ABADDE.h"

namespace ABADD {

std::string run() {
  std::string out("ABADD");
  out += std::string(SEPARATOR);
  out += ABADDA::run();
  out += std::string(SEPARATOR);
  out += ABADDB::run();
  out += std::string(SEPARATOR);
  out += ABADDC::run();
  out += std::string(SEPARATOR);
  out += ABADDD::run();
  out += std::string(SEPARATOR);
  out += ABADDE::run();
  return out;
}

}