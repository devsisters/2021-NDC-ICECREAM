#include "ACAAC.h"
#include "A/ACAACA.h"
#include "B/ACAACB.h"
#include "C/ACAACC.h"
#include "D/ACAACD.h"
#include "E/ACAACE.h"

namespace ACAAC {

std::string run() {
  std::string out("ACAAC");
  out += std::string(SEPARATOR);
  out += ACAACA::run();
  out += std::string(SEPARATOR);
  out += ACAACB::run();
  out += std::string(SEPARATOR);
  out += ACAACC::run();
  out += std::string(SEPARATOR);
  out += ACAACD::run();
  out += std::string(SEPARATOR);
  out += ACAACE::run();
  return out;
}

}