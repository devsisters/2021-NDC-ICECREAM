#include "AACBB.h"
#include "A/AACBBA.h"
#include "B/AACBBB.h"
#include "C/AACBBC.h"
#include "D/AACBBD.h"
#include "E/AACBBE.h"

namespace AACBB {

std::string run() {
  std::string out("AACBB");
  out += std::string(SEPARATOR);
  out += AACBBA::run();
  out += std::string(SEPARATOR);
  out += AACBBB::run();
  out += std::string(SEPARATOR);
  out += AACBBC::run();
  out += std::string(SEPARATOR);
  out += AACBBD::run();
  out += std::string(SEPARATOR);
  out += AACBBE::run();
  return out;
}

}