#include "AAEAE.h"
#include "A/AAEAEA.h"
#include "B/AAEAEB.h"
#include "C/AAEAEC.h"
#include "D/AAEAED.h"
#include "E/AAEAEE.h"

namespace AAEAE {

std::string run() {
  std::string out("AAEAE");
  out += std::string(SEPARATOR);
  out += AAEAEA::run();
  out += std::string(SEPARATOR);
  out += AAEAEB::run();
  out += std::string(SEPARATOR);
  out += AAEAEC::run();
  out += std::string(SEPARATOR);
  out += AAEAED::run();
  out += std::string(SEPARATOR);
  out += AAEAEE::run();
  return out;
}

}