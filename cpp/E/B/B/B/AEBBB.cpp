#include "AEBBB.h"
#include "A/AEBBBA.h"
#include "B/AEBBBB.h"
#include "C/AEBBBC.h"
#include "D/AEBBBD.h"
#include "E/AEBBBE.h"

namespace AEBBB {

std::string run() {
  std::string out("AEBBB");
  out += std::string(SEPARATOR);
  out += AEBBBA::run();
  out += std::string(SEPARATOR);
  out += AEBBBB::run();
  out += std::string(SEPARATOR);
  out += AEBBBC::run();
  out += std::string(SEPARATOR);
  out += AEBBBD::run();
  out += std::string(SEPARATOR);
  out += AEBBBE::run();
  return out;
}

}