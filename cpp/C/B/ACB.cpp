#include "ACB.h"
#include "A/ACBA.h"
#include "B/ACBB.h"
#include "C/ACBC.h"
#include "D/ACBD.h"
#include "E/ACBE.h"

namespace ACB {

std::string run() {
  std::string out("ACB");
  out += std::string(SEPARATOR);
  out += ACBA::run();
  out += std::string(SEPARATOR);
  out += ACBB::run();
  out += std::string(SEPARATOR);
  out += ACBC::run();
  out += std::string(SEPARATOR);
  out += ACBD::run();
  out += std::string(SEPARATOR);
  out += ACBE::run();
  return out;
}

}