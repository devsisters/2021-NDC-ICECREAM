#include "ACDEB.h"
#include "A/ACDEBA.h"
#include "B/ACDEBB.h"
#include "C/ACDEBC.h"
#include "D/ACDEBD.h"
#include "E/ACDEBE.h"

namespace ACDEB {

std::string run() {
  std::string out("ACDEB");
  out += std::string(SEPARATOR);
  out += ACDEBA::run();
  out += std::string(SEPARATOR);
  out += ACDEBB::run();
  out += std::string(SEPARATOR);
  out += ACDEBC::run();
  out += std::string(SEPARATOR);
  out += ACDEBD::run();
  out += std::string(SEPARATOR);
  out += ACDEBE::run();
  return out;
}

}