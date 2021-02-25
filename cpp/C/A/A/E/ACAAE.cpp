#include "ACAAE.h"
#include "A/ACAAEA.h"
#include "B/ACAAEB.h"
#include "C/ACAAEC.h"
#include "D/ACAAED.h"
#include "E/ACAAEE.h"

namespace ACAAE {

std::string run() {
  std::string out("ACAAE");
  out += std::string(SEPARATOR);
  out += ACAAEA::run();
  out += std::string(SEPARATOR);
  out += ACAAEB::run();
  out += std::string(SEPARATOR);
  out += ACAAEC::run();
  out += std::string(SEPARATOR);
  out += ACAAED::run();
  out += std::string(SEPARATOR);
  out += ACAAEE::run();
  return out;
}

}