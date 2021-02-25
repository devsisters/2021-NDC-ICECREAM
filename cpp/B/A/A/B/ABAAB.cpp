#include "ABAAB.h"
#include "A/ABAABA.h"
#include "B/ABAABB.h"
#include "C/ABAABC.h"
#include "D/ABAABD.h"
#include "E/ABAABE.h"

namespace ABAAB {

std::string run() {
  std::string out("ABAAB");
  out += std::string(SEPARATOR);
  out += ABAABA::run();
  out += std::string(SEPARATOR);
  out += ABAABB::run();
  out += std::string(SEPARATOR);
  out += ABAABC::run();
  out += std::string(SEPARATOR);
  out += ABAABD::run();
  out += std::string(SEPARATOR);
  out += ABAABE::run();
  return out;
}

}