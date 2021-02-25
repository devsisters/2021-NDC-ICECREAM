#include "AEEAB.h"
#include "A/AEEABA.h"
#include "B/AEEABB.h"
#include "C/AEEABC.h"
#include "D/AEEABD.h"
#include "E/AEEABE.h"

namespace AEEAB {

std::string run() {
  std::string out("AEEAB");
  out += std::string(SEPARATOR);
  out += AEEABA::run();
  out += std::string(SEPARATOR);
  out += AEEABB::run();
  out += std::string(SEPARATOR);
  out += AEEABC::run();
  out += std::string(SEPARATOR);
  out += AEEABD::run();
  out += std::string(SEPARATOR);
  out += AEEABE::run();
  return out;
}

}