#include "AADEB.h"
#include "A/AADEBA.h"
#include "B/AADEBB.h"
#include "C/AADEBC.h"
#include "D/AADEBD.h"
#include "E/AADEBE.h"

namespace AADEB {

std::string run() {
  std::string out("AADEB");
  out += std::string(SEPARATOR);
  out += AADEBA::run();
  out += std::string(SEPARATOR);
  out += AADEBB::run();
  out += std::string(SEPARATOR);
  out += AADEBC::run();
  out += std::string(SEPARATOR);
  out += AADEBD::run();
  out += std::string(SEPARATOR);
  out += AADEBE::run();
  return out;
}

}