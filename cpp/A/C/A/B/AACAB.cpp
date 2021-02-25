#include "AACAB.h"
#include "A/AACABA.h"
#include "B/AACABB.h"
#include "C/AACABC.h"
#include "D/AACABD.h"
#include "E/AACABE.h"

namespace AACAB {

std::string run() {
  std::string out("AACAB");
  out += std::string(SEPARATOR);
  out += AACABA::run();
  out += std::string(SEPARATOR);
  out += AACABB::run();
  out += std::string(SEPARATOR);
  out += AACABC::run();
  out += std::string(SEPARATOR);
  out += AACABD::run();
  out += std::string(SEPARATOR);
  out += AACABE::run();
  return out;
}

}