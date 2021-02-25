#include "AEBDD.h"
#include "A/AEBDDA.h"
#include "B/AEBDDB.h"
#include "C/AEBDDC.h"
#include "D/AEBDDD.h"
#include "E/AEBDDE.h"

namespace AEBDD {

std::string run() {
  std::string out("AEBDD");
  out += std::string(SEPARATOR);
  out += AEBDDA::run();
  out += std::string(SEPARATOR);
  out += AEBDDB::run();
  out += std::string(SEPARATOR);
  out += AEBDDC::run();
  out += std::string(SEPARATOR);
  out += AEBDDD::run();
  out += std::string(SEPARATOR);
  out += AEBDDE::run();
  return out;
}

}