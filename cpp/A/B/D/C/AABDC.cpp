#include "AABDC.h"
#include "A/AABDCA.h"
#include "B/AABDCB.h"
#include "C/AABDCC.h"
#include "D/AABDCD.h"
#include "E/AABDCE.h"

namespace AABDC {

std::string run() {
  std::string out("AABDC");
  out += std::string(SEPARATOR);
  out += AABDCA::run();
  out += std::string(SEPARATOR);
  out += AABDCB::run();
  out += std::string(SEPARATOR);
  out += AABDCC::run();
  out += std::string(SEPARATOR);
  out += AABDCD::run();
  out += std::string(SEPARATOR);
  out += AABDCE::run();
  return out;
}

}