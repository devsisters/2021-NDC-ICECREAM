#include "AACBC.h"
#include "A/AACBCA.h"
#include "B/AACBCB.h"
#include "C/AACBCC.h"
#include "D/AACBCD.h"
#include "E/AACBCE.h"

namespace AACBC {

std::string run() {
  std::string out("AACBC");
  out += std::string(SEPARATOR);
  out += AACBCA::run();
  out += std::string(SEPARATOR);
  out += AACBCB::run();
  out += std::string(SEPARATOR);
  out += AACBCC::run();
  out += std::string(SEPARATOR);
  out += AACBCD::run();
  out += std::string(SEPARATOR);
  out += AACBCE::run();
  return out;
}

}