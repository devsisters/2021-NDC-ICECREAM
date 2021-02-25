#include "ADBAB.h"
#include "A/ADBABA.h"
#include "B/ADBABB.h"
#include "C/ADBABC.h"
#include "D/ADBABD.h"
#include "E/ADBABE.h"

namespace ADBAB {

std::string run() {
  std::string out("ADBAB");
  out += std::string(SEPARATOR);
  out += ADBABA::run();
  out += std::string(SEPARATOR);
  out += ADBABB::run();
  out += std::string(SEPARATOR);
  out += ADBABC::run();
  out += std::string(SEPARATOR);
  out += ADBABD::run();
  out += std::string(SEPARATOR);
  out += ADBABE::run();
  return out;
}

}