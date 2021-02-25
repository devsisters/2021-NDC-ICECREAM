#include "AAEAB.h"
#include "A/AAEABA.h"
#include "B/AAEABB.h"
#include "C/AAEABC.h"
#include "D/AAEABD.h"
#include "E/AAEABE.h"

namespace AAEAB {

std::string run() {
  std::string out("AAEAB");
  out += std::string(SEPARATOR);
  out += AAEABA::run();
  out += std::string(SEPARATOR);
  out += AAEABB::run();
  out += std::string(SEPARATOR);
  out += AAEABC::run();
  out += std::string(SEPARATOR);
  out += AAEABD::run();
  out += std::string(SEPARATOR);
  out += AAEABE::run();
  return out;
}

}