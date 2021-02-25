#include "ABAEB.h"
#include "A/ABAEBA.h"
#include "B/ABAEBB.h"
#include "C/ABAEBC.h"
#include "D/ABAEBD.h"
#include "E/ABAEBE.h"

namespace ABAEB {

std::string run() {
  std::string out("ABAEB");
  out += std::string(SEPARATOR);
  out += ABAEBA::run();
  out += std::string(SEPARATOR);
  out += ABAEBB::run();
  out += std::string(SEPARATOR);
  out += ABAEBC::run();
  out += std::string(SEPARATOR);
  out += ABAEBD::run();
  out += std::string(SEPARATOR);
  out += ABAEBE::run();
  return out;
}

}