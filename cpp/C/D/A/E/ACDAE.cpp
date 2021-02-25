#include "ACDAE.h"
#include "A/ACDAEA.h"
#include "B/ACDAEB.h"
#include "C/ACDAEC.h"
#include "D/ACDAED.h"
#include "E/ACDAEE.h"

namespace ACDAE {

std::string run() {
  std::string out("ACDAE");
  out += std::string(SEPARATOR);
  out += ACDAEA::run();
  out += std::string(SEPARATOR);
  out += ACDAEB::run();
  out += std::string(SEPARATOR);
  out += ACDAEC::run();
  out += std::string(SEPARATOR);
  out += ACDAED::run();
  out += std::string(SEPARATOR);
  out += ACDAEE::run();
  return out;
}

}