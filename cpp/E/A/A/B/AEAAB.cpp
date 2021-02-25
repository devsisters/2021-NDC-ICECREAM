#include "AEAAB.h"
#include "A/AEAABA.h"
#include "B/AEAABB.h"
#include "C/AEAABC.h"
#include "D/AEAABD.h"
#include "E/AEAABE.h"

namespace AEAAB {

std::string run() {
  std::string out("AEAAB");
  out += std::string(SEPARATOR);
  out += AEAABA::run();
  out += std::string(SEPARATOR);
  out += AEAABB::run();
  out += std::string(SEPARATOR);
  out += AEAABC::run();
  out += std::string(SEPARATOR);
  out += AEAABD::run();
  out += std::string(SEPARATOR);
  out += AEAABE::run();
  return out;
}

}