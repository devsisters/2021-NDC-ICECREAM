#include "ACEB.h"
#include "A/ACEBA.h"
#include "B/ACEBB.h"
#include "C/ACEBC.h"
#include "D/ACEBD.h"
#include "E/ACEBE.h"

namespace ACEB {

std::string run() {
  std::string out("ACEB");
  out += std::string(SEPARATOR);
  out += ACEBA::run();
  out += std::string(SEPARATOR);
  out += ACEBB::run();
  out += std::string(SEPARATOR);
  out += ACEBC::run();
  out += std::string(SEPARATOR);
  out += ACEBD::run();
  out += std::string(SEPARATOR);
  out += ACEBE::run();
  return out;
}

}