#include "ACDBB.h"
#include "A/ACDBBA.h"
#include "B/ACDBBB.h"
#include "C/ACDBBC.h"
#include "D/ACDBBD.h"
#include "E/ACDBBE.h"

namespace ACDBB {

std::string run() {
  std::string out("ACDBB");
  out += std::string(SEPARATOR);
  out += ACDBBA::run();
  out += std::string(SEPARATOR);
  out += ACDBBB::run();
  out += std::string(SEPARATOR);
  out += ACDBBC::run();
  out += std::string(SEPARATOR);
  out += ACDBBD::run();
  out += std::string(SEPARATOR);
  out += ACDBBE::run();
  return out;
}

}