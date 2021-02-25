#include "AACDD.h"
#include "A/AACDDA.h"
#include "B/AACDDB.h"
#include "C/AACDDC.h"
#include "D/AACDDD.h"
#include "E/AACDDE.h"

namespace AACDD {

std::string run() {
  std::string out("AACDD");
  out += std::string(SEPARATOR);
  out += AACDDA::run();
  out += std::string(SEPARATOR);
  out += AACDDB::run();
  out += std::string(SEPARATOR);
  out += AACDDC::run();
  out += std::string(SEPARATOR);
  out += AACDDD::run();
  out += std::string(SEPARATOR);
  out += AACDDE::run();
  return out;
}

}