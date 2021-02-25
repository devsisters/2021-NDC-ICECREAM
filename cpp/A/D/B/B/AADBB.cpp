#include "AADBB.h"
#include "A/AADBBA.h"
#include "B/AADBBB.h"
#include "C/AADBBC.h"
#include "D/AADBBD.h"
#include "E/AADBBE.h"

namespace AADBB {

std::string run() {
  std::string out("AADBB");
  out += std::string(SEPARATOR);
  out += AADBBA::run();
  out += std::string(SEPARATOR);
  out += AADBBB::run();
  out += std::string(SEPARATOR);
  out += AADBBC::run();
  out += std::string(SEPARATOR);
  out += AADBBD::run();
  out += std::string(SEPARATOR);
  out += AADBBE::run();
  return out;
}

}