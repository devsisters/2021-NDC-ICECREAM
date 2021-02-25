#include "AECBB.h"
#include "A/AECBBA.h"
#include "B/AECBBB.h"
#include "C/AECBBC.h"
#include "D/AECBBD.h"
#include "E/AECBBE.h"

namespace AECBB {

std::string run() {
  std::string out("AECBB");
  out += std::string(SEPARATOR);
  out += AECBBA::run();
  out += std::string(SEPARATOR);
  out += AECBBB::run();
  out += std::string(SEPARATOR);
  out += AECBBC::run();
  out += std::string(SEPARATOR);
  out += AECBBD::run();
  out += std::string(SEPARATOR);
  out += AECBBE::run();
  return out;
}

}