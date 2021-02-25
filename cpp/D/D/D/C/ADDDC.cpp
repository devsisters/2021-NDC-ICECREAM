#include "ADDDC.h"
#include "A/ADDDCA.h"
#include "B/ADDDCB.h"
#include "C/ADDDCC.h"
#include "D/ADDDCD.h"
#include "E/ADDDCE.h"

namespace ADDDC {

std::string run() {
  std::string out("ADDDC");
  out += std::string(SEPARATOR);
  out += ADDDCA::run();
  out += std::string(SEPARATOR);
  out += ADDDCB::run();
  out += std::string(SEPARATOR);
  out += ADDDCC::run();
  out += std::string(SEPARATOR);
  out += ADDDCD::run();
  out += std::string(SEPARATOR);
  out += ADDDCE::run();
  return out;
}

}