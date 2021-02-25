#include "ABBC.h"
#include "A/ABBCA.h"
#include "B/ABBCB.h"
#include "C/ABBCC.h"
#include "D/ABBCD.h"
#include "E/ABBCE.h"

namespace ABBC {

std::string run() {
  std::string out("ABBC");
  out += std::string(SEPARATOR);
  out += ABBCA::run();
  out += std::string(SEPARATOR);
  out += ABBCB::run();
  out += std::string(SEPARATOR);
  out += ABBCC::run();
  out += std::string(SEPARATOR);
  out += ABBCD::run();
  out += std::string(SEPARATOR);
  out += ABBCE::run();
  return out;
}

}