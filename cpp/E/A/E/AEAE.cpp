#include "AEAE.h"
#include "A/AEAEA.h"
#include "B/AEAEB.h"
#include "C/AEAEC.h"
#include "D/AEAED.h"
#include "E/AEAEE.h"

namespace AEAE {

std::string run() {
  std::string out("AEAE");
  out += std::string(SEPARATOR);
  out += AEAEA::run();
  out += std::string(SEPARATOR);
  out += AEAEB::run();
  out += std::string(SEPARATOR);
  out += AEAEC::run();
  out += std::string(SEPARATOR);
  out += AEAED::run();
  out += std::string(SEPARATOR);
  out += AEAEE::run();
  return out;
}

}