#include "ADEB.h"
#include "A/ADEBA.h"
#include "B/ADEBB.h"
#include "C/ADEBC.h"
#include "D/ADEBD.h"
#include "E/ADEBE.h"

namespace ADEB {

std::string run() {
  std::string out("ADEB");
  out += std::string(SEPARATOR);
  out += ADEBA::run();
  out += std::string(SEPARATOR);
  out += ADEBB::run();
  out += std::string(SEPARATOR);
  out += ADEBC::run();
  out += std::string(SEPARATOR);
  out += ADEBD::run();
  out += std::string(SEPARATOR);
  out += ADEBE::run();
  return out;
}

}