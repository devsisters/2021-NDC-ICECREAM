#include "ACADC.h"
#include "A/ACADCA.h"
#include "B/ACADCB.h"
#include "C/ACADCC.h"
#include "D/ACADCD.h"
#include "E/ACADCE.h"

namespace ACADC {

std::string run() {
  std::string out("ACADC");
  out += std::string(SEPARATOR);
  out += ACADCA::run();
  out += std::string(SEPARATOR);
  out += ACADCB::run();
  out += std::string(SEPARATOR);
  out += ACADCC::run();
  out += std::string(SEPARATOR);
  out += ACADCD::run();
  out += std::string(SEPARATOR);
  out += ACADCE::run();
  return out;
}

}