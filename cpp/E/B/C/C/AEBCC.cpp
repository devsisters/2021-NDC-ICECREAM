#include "AEBCC.h"
#include "A/AEBCCA.h"
#include "B/AEBCCB.h"
#include "C/AEBCCC.h"
#include "D/AEBCCD.h"
#include "E/AEBCCE.h"

namespace AEBCC {

std::string run() {
  std::string out("AEBCC");
  out += std::string(SEPARATOR);
  out += AEBCCA::run();
  out += std::string(SEPARATOR);
  out += AEBCCB::run();
  out += std::string(SEPARATOR);
  out += AEBCCC::run();
  out += std::string(SEPARATOR);
  out += AEBCCD::run();
  out += std::string(SEPARATOR);
  out += AEBCCE::run();
  return out;
}

}