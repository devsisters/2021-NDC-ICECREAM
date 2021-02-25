#include "ACDDC.h"
#include "A/ACDDCA.h"
#include "B/ACDDCB.h"
#include "C/ACDDCC.h"
#include "D/ACDDCD.h"
#include "E/ACDDCE.h"

namespace ACDDC {

std::string run() {
  std::string out("ACDDC");
  out += std::string(SEPARATOR);
  out += ACDDCA::run();
  out += std::string(SEPARATOR);
  out += ACDDCB::run();
  out += std::string(SEPARATOR);
  out += ACDDCC::run();
  out += std::string(SEPARATOR);
  out += ACDDCD::run();
  out += std::string(SEPARATOR);
  out += ACDDCE::run();
  return out;
}

}