#include "AEDAB.h"
#include "A/AEDABA.h"
#include "B/AEDABB.h"
#include "C/AEDABC.h"
#include "D/AEDABD.h"
#include "E/AEDABE.h"

namespace AEDAB {

std::string run() {
  std::string out("AEDAB");
  out += std::string(SEPARATOR);
  out += AEDABA::run();
  out += std::string(SEPARATOR);
  out += AEDABB::run();
  out += std::string(SEPARATOR);
  out += AEDABC::run();
  out += std::string(SEPARATOR);
  out += AEDABD::run();
  out += std::string(SEPARATOR);
  out += AEDABE::run();
  return out;
}

}