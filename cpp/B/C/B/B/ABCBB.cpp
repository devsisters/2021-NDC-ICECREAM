#include "ABCBB.h"
#include "A/ABCBBA.h"
#include "B/ABCBBB.h"
#include "C/ABCBBC.h"
#include "D/ABCBBD.h"
#include "E/ABCBBE.h"

namespace ABCBB {

std::string run() {
  std::string out("ABCBB");
  out += std::string(SEPARATOR);
  out += ABCBBA::run();
  out += std::string(SEPARATOR);
  out += ABCBBB::run();
  out += std::string(SEPARATOR);
  out += ABCBBC::run();
  out += std::string(SEPARATOR);
  out += ABCBBD::run();
  out += std::string(SEPARATOR);
  out += ABCBBE::run();
  return out;
}

}