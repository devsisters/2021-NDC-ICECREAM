#include "ABBEC.h"
#include "A/ABBECA.h"
#include "B/ABBECB.h"
#include "C/ABBECC.h"
#include "D/ABBECD.h"
#include "E/ABBECE.h"

namespace ABBEC {

std::string run() {
  std::string out("ABBEC");
  out += std::string(SEPARATOR);
  out += ABBECA::run();
  out += std::string(SEPARATOR);
  out += ABBECB::run();
  out += std::string(SEPARATOR);
  out += ABBECC::run();
  out += std::string(SEPARATOR);
  out += ABBECD::run();
  out += std::string(SEPARATOR);
  out += ABBECE::run();
  return out;
}

}