#include "AECCD.h"
#include "A/AECCDA.h"
#include "B/AECCDB.h"
#include "C/AECCDC.h"
#include "D/AECCDD.h"
#include "E/AECCDE.h"

namespace AECCD {

std::string run() {
  std::string out("AECCD");
  out += std::string(SEPARATOR);
  out += AECCDA::run();
  out += std::string(SEPARATOR);
  out += AECCDB::run();
  out += std::string(SEPARATOR);
  out += AECCDC::run();
  out += std::string(SEPARATOR);
  out += AECCDD::run();
  out += std::string(SEPARATOR);
  out += AECCDE::run();
  return out;
}

}