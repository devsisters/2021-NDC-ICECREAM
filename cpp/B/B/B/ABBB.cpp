#include "ABBB.h"
#include "A/ABBBA.h"
#include "B/ABBBB.h"
#include "C/ABBBC.h"
#include "D/ABBBD.h"
#include "E/ABBBE.h"

namespace ABBB {

std::string run() {
  std::string out("ABBB");
  out += std::string(SEPARATOR);
  out += ABBBA::run();
  out += std::string(SEPARATOR);
  out += ABBBB::run();
  out += std::string(SEPARATOR);
  out += ABBBC::run();
  out += std::string(SEPARATOR);
  out += ABBBD::run();
  out += std::string(SEPARATOR);
  out += ABBBE::run();
  return out;
}

}