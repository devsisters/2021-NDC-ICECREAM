#include "AAAB.h"
#include "A/AAABA.h"
#include "B/AAABB.h"
#include "C/AAABC.h"
#include "D/AAABD.h"
#include "E/AAABE.h"

namespace AAAB {

std::string run() {
  std::string out("AAAB");
  out += std::string(SEPARATOR);
  out += AAABA::run();
  out += std::string(SEPARATOR);
  out += AAABB::run();
  out += std::string(SEPARATOR);
  out += AAABC::run();
  out += std::string(SEPARATOR);
  out += AAABD::run();
  out += std::string(SEPARATOR);
  out += AAABE::run();
  return out;
}

}