#include "ACDAB.h"
#include "A/ACDABA.h"
#include "B/ACDABB.h"
#include "C/ACDABC.h"
#include "D/ACDABD.h"
#include "E/ACDABE.h"

namespace ACDAB {

std::string run() {
  std::string out("ACDAB");
  out += std::string(SEPARATOR);
  out += ACDABA::run();
  out += std::string(SEPARATOR);
  out += ACDABB::run();
  out += std::string(SEPARATOR);
  out += ACDABC::run();
  out += std::string(SEPARATOR);
  out += ACDABD::run();
  out += std::string(SEPARATOR);
  out += ACDABE::run();
  return out;
}

}