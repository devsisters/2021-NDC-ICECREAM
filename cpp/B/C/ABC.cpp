#include "ABC.h"
#include "A/ABCA.h"
#include "B/ABCB.h"
#include "C/ABCC.h"
#include "D/ABCD.h"
#include "E/ABCE.h"

namespace ABC {

std::string run() {
  std::string out("ABC");
  out += std::string(SEPARATOR);
  out += ABCA::run();
  out += std::string(SEPARATOR);
  out += ABCB::run();
  out += std::string(SEPARATOR);
  out += ABCC::run();
  out += std::string(SEPARATOR);
  out += ABCD::run();
  out += std::string(SEPARATOR);
  out += ABCE::run();
  return out;
}

}