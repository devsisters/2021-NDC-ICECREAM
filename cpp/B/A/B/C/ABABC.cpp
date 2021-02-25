#include "ABABC.h"
#include "A/ABABCA.h"
#include "B/ABABCB.h"
#include "C/ABABCC.h"
#include "D/ABABCD.h"
#include "E/ABABCE.h"

namespace ABABC {

std::string run() {
  std::string out("ABABC");
  out += std::string(SEPARATOR);
  out += ABABCA::run();
  out += std::string(SEPARATOR);
  out += ABABCB::run();
  out += std::string(SEPARATOR);
  out += ABABCC::run();
  out += std::string(SEPARATOR);
  out += ABABCD::run();
  out += std::string(SEPARATOR);
  out += ABABCE::run();
  return out;
}

}