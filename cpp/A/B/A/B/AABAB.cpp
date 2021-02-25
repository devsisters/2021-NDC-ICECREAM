#include "AABAB.h"
#include "A/AABABA.h"
#include "B/AABABB.h"
#include "C/AABABC.h"
#include "D/AABABD.h"
#include "E/AABABE.h"

namespace AABAB {

std::string run() {
  std::string out("AABAB");
  out += std::string(SEPARATOR);
  out += AABABA::run();
  out += std::string(SEPARATOR);
  out += AABABB::run();
  out += std::string(SEPARATOR);
  out += AABABC::run();
  out += std::string(SEPARATOR);
  out += AABABD::run();
  out += std::string(SEPARATOR);
  out += AABABE::run();
  return out;
}

}