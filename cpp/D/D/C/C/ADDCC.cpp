#include "ADDCC.h"
#include "A/ADDCCA.h"
#include "B/ADDCCB.h"
#include "C/ADDCCC.h"
#include "D/ADDCCD.h"
#include "E/ADDCCE.h"

namespace ADDCC {

std::string run() {
  std::string out("ADDCC");
  out += std::string(SEPARATOR);
  out += ADDCCA::run();
  out += std::string(SEPARATOR);
  out += ADDCCB::run();
  out += std::string(SEPARATOR);
  out += ADDCCC::run();
  out += std::string(SEPARATOR);
  out += ADDCCD::run();
  out += std::string(SEPARATOR);
  out += ADDCCE::run();
  return out;
}

}