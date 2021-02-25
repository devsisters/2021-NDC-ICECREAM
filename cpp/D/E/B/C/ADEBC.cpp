#include "ADEBC.h"
#include "A/ADEBCA.h"
#include "B/ADEBCB.h"
#include "C/ADEBCC.h"
#include "D/ADEBCD.h"
#include "E/ADEBCE.h"

namespace ADEBC {

std::string run() {
  std::string out("ADEBC");
  out += std::string(SEPARATOR);
  out += ADEBCA::run();
  out += std::string(SEPARATOR);
  out += ADEBCB::run();
  out += std::string(SEPARATOR);
  out += ADEBCC::run();
  out += std::string(SEPARATOR);
  out += ADEBCD::run();
  out += std::string(SEPARATOR);
  out += ADEBCE::run();
  return out;
}

}