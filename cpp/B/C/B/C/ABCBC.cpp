#include "ABCBC.h"
#include "A/ABCBCA.h"
#include "B/ABCBCB.h"
#include "C/ABCBCC.h"
#include "D/ABCBCD.h"
#include "E/ABCBCE.h"

namespace ABCBC {

std::string run() {
  std::string out("ABCBC");
  out += std::string(SEPARATOR);
  out += ABCBCA::run();
  out += std::string(SEPARATOR);
  out += ABCBCB::run();
  out += std::string(SEPARATOR);
  out += ABCBCC::run();
  out += std::string(SEPARATOR);
  out += ABCBCD::run();
  out += std::string(SEPARATOR);
  out += ABCBCE::run();
  return out;
}

}