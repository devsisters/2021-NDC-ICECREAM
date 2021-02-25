#include "ADBAE.h"
#include "A/ADBAEA.h"
#include "B/ADBAEB.h"
#include "C/ADBAEC.h"
#include "D/ADBAED.h"
#include "E/ADBAEE.h"

namespace ADBAE {

std::string run() {
  std::string out("ADBAE");
  out += std::string(SEPARATOR);
  out += ADBAEA::run();
  out += std::string(SEPARATOR);
  out += ADBAEB::run();
  out += std::string(SEPARATOR);
  out += ADBAEC::run();
  out += std::string(SEPARATOR);
  out += ADBAED::run();
  out += std::string(SEPARATOR);
  out += ADBAEE::run();
  return out;
}

}