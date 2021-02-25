#include "AEBEB.h"
#include "A/AEBEBA.h"
#include "B/AEBEBB.h"
#include "C/AEBEBC.h"
#include "D/AEBEBD.h"
#include "E/AEBEBE.h"

namespace AEBEB {

std::string run() {
  std::string out("AEBEB");
  out += std::string(SEPARATOR);
  out += AEBEBA::run();
  out += std::string(SEPARATOR);
  out += AEBEBB::run();
  out += std::string(SEPARATOR);
  out += AEBEBC::run();
  out += std::string(SEPARATOR);
  out += AEBEBD::run();
  out += std::string(SEPARATOR);
  out += AEBEBE::run();
  return out;
}

}