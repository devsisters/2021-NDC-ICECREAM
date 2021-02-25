#include "ABABB.h"
#include "A/ABABBA.h"
#include "B/ABABBB.h"
#include "C/ABABBC.h"
#include "D/ABABBD.h"
#include "E/ABABBE.h"

namespace ABABB {

std::string run() {
  std::string out("ABABB");
  out += std::string(SEPARATOR);
  out += ABABBA::run();
  out += std::string(SEPARATOR);
  out += ABABBB::run();
  out += std::string(SEPARATOR);
  out += ABABBC::run();
  out += std::string(SEPARATOR);
  out += ABABBD::run();
  out += std::string(SEPARATOR);
  out += ABABBE::run();
  return out;
}

}