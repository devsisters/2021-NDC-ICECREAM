#include "AACEB.h"
#include "A/AACEBA.h"
#include "B/AACEBB.h"
#include "C/AACEBC.h"
#include "D/AACEBD.h"
#include "E/AACEBE.h"

namespace AACEB {

std::string run() {
  std::string out("AACEB");
  out += std::string(SEPARATOR);
  out += AACEBA::run();
  out += std::string(SEPARATOR);
  out += AACEBB::run();
  out += std::string(SEPARATOR);
  out += AACEBC::run();
  out += std::string(SEPARATOR);
  out += AACEBD::run();
  out += std::string(SEPARATOR);
  out += AACEBE::run();
  return out;
}

}