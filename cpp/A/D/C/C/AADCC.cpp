#include "AADCC.h"
#include "A/AADCCA.h"
#include "B/AADCCB.h"
#include "C/AADCCC.h"
#include "D/AADCCD.h"
#include "E/AADCCE.h"

namespace AADCC {

std::string run() {
  std::string out("AADCC");
  out += std::string(SEPARATOR);
  out += AADCCA::run();
  out += std::string(SEPARATOR);
  out += AADCCB::run();
  out += std::string(SEPARATOR);
  out += AADCCC::run();
  out += std::string(SEPARATOR);
  out += AADCCD::run();
  out += std::string(SEPARATOR);
  out += AADCCE::run();
  return out;
}

}