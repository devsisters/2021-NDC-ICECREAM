#include "AECDD.h"
#include "A/AECDDA.h"
#include "B/AECDDB.h"
#include "C/AECDDC.h"
#include "D/AECDDD.h"
#include "E/AECDDE.h"

namespace AECDD {

std::string run() {
  std::string out("AECDD");
  out += std::string(SEPARATOR);
  out += AECDDA::run();
  out += std::string(SEPARATOR);
  out += AECDDB::run();
  out += std::string(SEPARATOR);
  out += AECDDC::run();
  out += std::string(SEPARATOR);
  out += AECDDD::run();
  out += std::string(SEPARATOR);
  out += AECDDE::run();
  return out;
}

}