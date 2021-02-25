#include "ABBCC.h"
#include "A/ABBCCA.h"
#include "B/ABBCCB.h"
#include "C/ABBCCC.h"
#include "D/ABBCCD.h"
#include "E/ABBCCE.h"

namespace ABBCC {

std::string run() {
  std::string out("ABBCC");
  out += std::string(SEPARATOR);
  out += ABBCCA::run();
  out += std::string(SEPARATOR);
  out += ABBCCB::run();
  out += std::string(SEPARATOR);
  out += ABBCCC::run();
  out += std::string(SEPARATOR);
  out += ABBCCD::run();
  out += std::string(SEPARATOR);
  out += ABBCCE::run();
  return out;
}

}