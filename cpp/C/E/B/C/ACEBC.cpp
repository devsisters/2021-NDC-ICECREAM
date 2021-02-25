#include "ACEBC.h"
#include "A/ACEBCA.h"
#include "B/ACEBCB.h"
#include "C/ACEBCC.h"
#include "D/ACEBCD.h"
#include "E/ACEBCE.h"

namespace ACEBC {

std::string run() {
  std::string out("ACEBC");
  out += std::string(SEPARATOR);
  out += ACEBCA::run();
  out += std::string(SEPARATOR);
  out += ACEBCB::run();
  out += std::string(SEPARATOR);
  out += ACEBCC::run();
  out += std::string(SEPARATOR);
  out += ACEBCD::run();
  out += std::string(SEPARATOR);
  out += ACEBCE::run();
  return out;
}

}