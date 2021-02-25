#include "AEDAE.h"
#include "A/AEDAEA.h"
#include "B/AEDAEB.h"
#include "C/AEDAEC.h"
#include "D/AEDAED.h"
#include "E/AEDAEE.h"

namespace AEDAE {

std::string run() {
  std::string out("AEDAE");
  out += std::string(SEPARATOR);
  out += AEDAEA::run();
  out += std::string(SEPARATOR);
  out += AEDAEB::run();
  out += std::string(SEPARATOR);
  out += AEDAEC::run();
  out += std::string(SEPARATOR);
  out += AEDAED::run();
  out += std::string(SEPARATOR);
  out += AEDAEE::run();
  return out;
}

}