#include "ABB.h"
#include "A/ABBA.h"
#include "B/ABBB.h"
#include "C/ABBC.h"
#include "D/ABBD.h"
#include "E/ABBE.h"

namespace ABB {

std::string run() {
  std::string out("ABB");
  out += std::string(SEPARATOR);
  out += ABBA::run();
  out += std::string(SEPARATOR);
  out += ABBB::run();
  out += std::string(SEPARATOR);
  out += ABBC::run();
  out += std::string(SEPARATOR);
  out += ABBD::run();
  out += std::string(SEPARATOR);
  out += ABBE::run();
  return out;
}

}