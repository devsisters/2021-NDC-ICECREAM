#include "AEDEB.h"
#include "A/AEDEBA.h"
#include "B/AEDEBB.h"
#include "C/AEDEBC.h"
#include "D/AEDEBD.h"
#include "E/AEDEBE.h"

namespace AEDEB {

std::string run() {
  std::string out("AEDEB");
  out += std::string(SEPARATOR);
  out += AEDEBA::run();
  out += std::string(SEPARATOR);
  out += AEDEBB::run();
  out += std::string(SEPARATOR);
  out += AEDEBC::run();
  out += std::string(SEPARATOR);
  out += AEDEBD::run();
  out += std::string(SEPARATOR);
  out += AEDEBE::run();
  return out;
}

}