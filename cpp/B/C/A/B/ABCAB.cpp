#include "ABCAB.h"
#include "A/ABCABA.h"
#include "B/ABCABB.h"
#include "C/ABCABC.h"
#include "D/ABCABD.h"
#include "E/ABCABE.h"

namespace ABCAB {

std::string run() {
  std::string out("ABCAB");
  out += std::string(SEPARATOR);
  out += ABCABA::run();
  out += std::string(SEPARATOR);
  out += ABCABB::run();
  out += std::string(SEPARATOR);
  out += ABCABC::run();
  out += std::string(SEPARATOR);
  out += ABCABD::run();
  out += std::string(SEPARATOR);
  out += ABCABE::run();
  return out;
}

}