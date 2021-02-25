#include "ABBAE.h"
#include "A/ABBAEA.h"
#include "B/ABBAEB.h"
#include "C/ABBAEC.h"
#include "D/ABBAED.h"
#include "E/ABBAEE.h"

namespace ABBAE {

std::string run() {
  std::string out("ABBAE");
  out += std::string(SEPARATOR);
  out += ABBAEA::run();
  out += std::string(SEPARATOR);
  out += ABBAEB::run();
  out += std::string(SEPARATOR);
  out += ABBAEC::run();
  out += std::string(SEPARATOR);
  out += ABBAED::run();
  out += std::string(SEPARATOR);
  out += ABBAEE::run();
  return out;
}

}