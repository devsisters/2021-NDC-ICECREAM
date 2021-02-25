#include "AEDDC.h"
#include "A/AEDDCA.h"
#include "B/AEDDCB.h"
#include "C/AEDDCC.h"
#include "D/AEDDCD.h"
#include "E/AEDDCE.h"

namespace AEDDC {

std::string run() {
  std::string out("AEDDC");
  out += std::string(SEPARATOR);
  out += AEDDCA::run();
  out += std::string(SEPARATOR);
  out += AEDDCB::run();
  out += std::string(SEPARATOR);
  out += AEDDCC::run();
  out += std::string(SEPARATOR);
  out += AEDDCD::run();
  out += std::string(SEPARATOR);
  out += AEDDCE::run();
  return out;
}

}