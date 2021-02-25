#include "ABEDC.h"
#include "A/ABEDCA.h"
#include "B/ABEDCB.h"
#include "C/ABEDCC.h"
#include "D/ABEDCD.h"
#include "E/ABEDCE.h"

namespace ABEDC {

std::string run() {
  std::string out("ABEDC");
  out += std::string(SEPARATOR);
  out += ABEDCA::run();
  out += std::string(SEPARATOR);
  out += ABEDCB::run();
  out += std::string(SEPARATOR);
  out += ABEDCC::run();
  out += std::string(SEPARATOR);
  out += ABEDCD::run();
  out += std::string(SEPARATOR);
  out += ABEDCE::run();
  return out;
}

}