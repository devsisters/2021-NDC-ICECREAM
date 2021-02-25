#include "ABAB.h"
#include "A/ABABA.h"
#include "B/ABABB.h"
#include "C/ABABC.h"
#include "D/ABABD.h"
#include "E/ABABE.h"

namespace ABAB {

std::string run() {
  std::string out("ABAB");
  out += std::string(SEPARATOR);
  out += ABABA::run();
  out += std::string(SEPARATOR);
  out += ABABB::run();
  out += std::string(SEPARATOR);
  out += ABABC::run();
  out += std::string(SEPARATOR);
  out += ABABD::run();
  out += std::string(SEPARATOR);
  out += ABABE::run();
  return out;
}

}