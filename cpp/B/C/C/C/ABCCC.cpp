#include "ABCCC.h"
#include "A/ABCCCA.h"
#include "B/ABCCCB.h"
#include "C/ABCCCC.h"
#include "D/ABCCCD.h"
#include "E/ABCCCE.h"

namespace ABCCC {

std::string run() {
  std::string out("ABCCC");
  out += std::string(SEPARATOR);
  out += ABCCCA::run();
  out += std::string(SEPARATOR);
  out += ABCCCB::run();
  out += std::string(SEPARATOR);
  out += ABCCCC::run();
  out += std::string(SEPARATOR);
  out += ABCCCD::run();
  out += std::string(SEPARATOR);
  out += ABCCCE::run();
  return out;
}

}