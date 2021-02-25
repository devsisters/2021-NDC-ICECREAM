#include "AEAB.h"
#include "A/AEABA.h"
#include "B/AEABB.h"
#include "C/AEABC.h"
#include "D/AEABD.h"
#include "E/AEABE.h"

namespace AEAB {

std::string run() {
  std::string out("AEAB");
  out += std::string(SEPARATOR);
  out += AEABA::run();
  out += std::string(SEPARATOR);
  out += AEABB::run();
  out += std::string(SEPARATOR);
  out += AEABC::run();
  out += std::string(SEPARATOR);
  out += AEABD::run();
  out += std::string(SEPARATOR);
  out += AEABE::run();
  return out;
}

}