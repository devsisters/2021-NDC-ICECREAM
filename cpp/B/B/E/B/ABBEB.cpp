#include "ABBEB.h"
#include "A/ABBEBA.h"
#include "B/ABBEBB.h"
#include "C/ABBEBC.h"
#include "D/ABBEBD.h"
#include "E/ABBEBE.h"

namespace ABBEB {

std::string run() {
  std::string out("ABBEB");
  out += std::string(SEPARATOR);
  out += ABBEBA::run();
  out += std::string(SEPARATOR);
  out += ABBEBB::run();
  out += std::string(SEPARATOR);
  out += ABBEBC::run();
  out += std::string(SEPARATOR);
  out += ABBEBD::run();
  out += std::string(SEPARATOR);
  out += ABBEBE::run();
  return out;
}

}