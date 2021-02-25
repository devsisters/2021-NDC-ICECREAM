#include "AACCC.h"
#include "A/AACCCA.h"
#include "B/AACCCB.h"
#include "C/AACCCC.h"
#include "D/AACCCD.h"
#include "E/AACCCE.h"

namespace AACCC {

std::string run() {
  std::string out("AACCC");
  out += std::string(SEPARATOR);
  out += AACCCA::run();
  out += std::string(SEPARATOR);
  out += AACCCB::run();
  out += std::string(SEPARATOR);
  out += AACCCC::run();
  out += std::string(SEPARATOR);
  out += AACCCD::run();
  out += std::string(SEPARATOR);
  out += AACCCE::run();
  return out;
}

}