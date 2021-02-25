#include "ADBB.h"
#include "A/ADBBA.h"
#include "B/ADBBB.h"
#include "C/ADBBC.h"
#include "D/ADBBD.h"
#include "E/ADBBE.h"

namespace ADBB {

std::string run() {
  std::string out("ADBB");
  out += std::string(SEPARATOR);
  out += ADBBA::run();
  out += std::string(SEPARATOR);
  out += ADBBB::run();
  out += std::string(SEPARATOR);
  out += ADBBC::run();
  out += std::string(SEPARATOR);
  out += ADBBD::run();
  out += std::string(SEPARATOR);
  out += ADBBE::run();
  return out;
}

}