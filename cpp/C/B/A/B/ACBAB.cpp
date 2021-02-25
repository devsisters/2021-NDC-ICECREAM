#include "ACBAB.h"
#include "A/ACBABA.h"
#include "B/ACBABB.h"
#include "C/ACBABC.h"
#include "D/ACBABD.h"
#include "E/ACBABE.h"

namespace ACBAB {

std::string run() {
  std::string out("ACBAB");
  out += std::string(SEPARATOR);
  out += ACBABA::run();
  out += std::string(SEPARATOR);
  out += ACBABB::run();
  out += std::string(SEPARATOR);
  out += ACBABC::run();
  out += std::string(SEPARATOR);
  out += ACBABD::run();
  out += std::string(SEPARATOR);
  out += ACBABE::run();
  return out;
}

}