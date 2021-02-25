#include "AEDBB.h"
#include "A/AEDBBA.h"
#include "B/AEDBBB.h"
#include "C/AEDBBC.h"
#include "D/AEDBBD.h"
#include "E/AEDBBE.h"

namespace AEDBB {

std::string run() {
  std::string out("AEDBB");
  out += std::string(SEPARATOR);
  out += AEDBBA::run();
  out += std::string(SEPARATOR);
  out += AEDBBB::run();
  out += std::string(SEPARATOR);
  out += AEDBBC::run();
  out += std::string(SEPARATOR);
  out += AEDBBD::run();
  out += std::string(SEPARATOR);
  out += AEDBBE::run();
  return out;
}

}