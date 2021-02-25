#include "ABDDC.h"
#include "A/ABDDCA.h"
#include "B/ABDDCB.h"
#include "C/ABDDCC.h"
#include "D/ABDDCD.h"
#include "E/ABDDCE.h"

namespace ABDDC {

std::string run() {
  std::string out("ABDDC");
  out += std::string(SEPARATOR);
  out += ABDDCA::run();
  out += std::string(SEPARATOR);
  out += ABDDCB::run();
  out += std::string(SEPARATOR);
  out += ABDDCC::run();
  out += std::string(SEPARATOR);
  out += ABDDCD::run();
  out += std::string(SEPARATOR);
  out += ABDDCE::run();
  return out;
}

}