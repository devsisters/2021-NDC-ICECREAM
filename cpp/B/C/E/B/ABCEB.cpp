#include "ABCEB.h"
#include "A/ABCEBA.h"
#include "B/ABCEBB.h"
#include "C/ABCEBC.h"
#include "D/ABCEBD.h"
#include "E/ABCEBE.h"

namespace ABCEB {

std::string run() {
  std::string out("ABCEB");
  out += std::string(SEPARATOR);
  out += ABCEBA::run();
  out += std::string(SEPARATOR);
  out += ABCEBB::run();
  out += std::string(SEPARATOR);
  out += ABCEBC::run();
  out += std::string(SEPARATOR);
  out += ABCEBD::run();
  out += std::string(SEPARATOR);
  out += ABCEBE::run();
  return out;
}

}