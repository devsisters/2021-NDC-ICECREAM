#include "AEAEC.h"
#include "A/AEAECA.h"
#include "B/AEAECB.h"
#include "C/AEAECC.h"
#include "D/AEAECD.h"
#include "E/AEAECE.h"

namespace AEAEC {

std::string run() {
  std::string out("AEAEC");
  out += std::string(SEPARATOR);
  out += AEAECA::run();
  out += std::string(SEPARATOR);
  out += AEAECB::run();
  out += std::string(SEPARATOR);
  out += AEAECC::run();
  out += std::string(SEPARATOR);
  out += AEAECD::run();
  out += std::string(SEPARATOR);
  out += AEAECE::run();
  return out;
}

}