#include "ADAAC.h"
#include "A/ADAACA.h"
#include "B/ADAACB.h"
#include "C/ADAACC.h"
#include "D/ADAACD.h"
#include "E/ADAACE.h"

namespace ADAAC {

std::string run() {
  std::string out("ADAAC");
  out += std::string(SEPARATOR);
  out += ADAACA::run();
  out += std::string(SEPARATOR);
  out += ADAACB::run();
  out += std::string(SEPARATOR);
  out += ADAACC::run();
  out += std::string(SEPARATOR);
  out += ADAACD::run();
  out += std::string(SEPARATOR);
  out += ADAACE::run();
  return out;
}

}