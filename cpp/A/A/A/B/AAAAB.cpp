#include "AAAAB.h"
#include "A/AAAABA.h"
#include "B/AAAABB.h"
#include "C/AAAABC.h"
#include "D/AAAABD.h"
#include "E/AAAABE.h"

namespace AAAAB {

std::string run() {
  std::string out("AAAAB");
  out += std::string(SEPARATOR);
  out += AAAABA::run();
  out += std::string(SEPARATOR);
  out += AAAABB::run();
  out += std::string(SEPARATOR);
  out += AAAABC::run();
  out += std::string(SEPARATOR);
  out += AAAABD::run();
  out += std::string(SEPARATOR);
  out += AAAABE::run();
  return out;
}

}