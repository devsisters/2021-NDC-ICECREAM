#include "ACBB.h"
#include "A/ACBBA.h"
#include "B/ACBBB.h"
#include "C/ACBBC.h"
#include "D/ACBBD.h"
#include "E/ACBBE.h"

namespace ACBB {

std::string run() {
  std::string out("ACBB");
  out += std::string(SEPARATOR);
  out += ACBBA::run();
  out += std::string(SEPARATOR);
  out += ACBBB::run();
  out += std::string(SEPARATOR);
  out += ACBBC::run();
  out += std::string(SEPARATOR);
  out += ACBBD::run();
  out += std::string(SEPARATOR);
  out += ACBBE::run();
  return out;
}

}