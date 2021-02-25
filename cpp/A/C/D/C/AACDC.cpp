#include "AACDC.h"
#include "A/AACDCA.h"
#include "B/AACDCB.h"
#include "C/AACDCC.h"
#include "D/AACDCD.h"
#include "E/AACDCE.h"

namespace AACDC {

std::string run() {
  std::string out("AACDC");
  out += std::string(SEPARATOR);
  out += AACDCA::run();
  out += std::string(SEPARATOR);
  out += AACDCB::run();
  out += std::string(SEPARATOR);
  out += AACDCC::run();
  out += std::string(SEPARATOR);
  out += AACDCD::run();
  out += std::string(SEPARATOR);
  out += AACDCE::run();
  return out;
}

}