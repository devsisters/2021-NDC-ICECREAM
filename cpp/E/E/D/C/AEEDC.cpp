#include "AEEDC.h"
#include "A/AEEDCA.h"
#include "B/AEEDCB.h"
#include "C/AEEDCC.h"
#include "D/AEEDCD.h"
#include "E/AEEDCE.h"

namespace AEEDC {

std::string run() {
  std::string out("AEEDC");
  out += std::string(SEPARATOR);
  out += AEEDCA::run();
  out += std::string(SEPARATOR);
  out += AEEDCB::run();
  out += std::string(SEPARATOR);
  out += AEEDCC::run();
  out += std::string(SEPARATOR);
  out += AEEDCD::run();
  out += std::string(SEPARATOR);
  out += AEEDCE::run();
  return out;
}

}