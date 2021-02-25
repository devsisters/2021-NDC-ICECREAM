#include "ADAAE.h"
#include "A/ADAAEA.h"
#include "B/ADAAEB.h"
#include "C/ADAAEC.h"
#include "D/ADAAED.h"
#include "E/ADAAEE.h"

namespace ADAAE {

std::string run() {
  std::string out("ADAAE");
  out += std::string(SEPARATOR);
  out += ADAAEA::run();
  out += std::string(SEPARATOR);
  out += ADAAEB::run();
  out += std::string(SEPARATOR);
  out += ADAAEC::run();
  out += std::string(SEPARATOR);
  out += ADAAED::run();
  out += std::string(SEPARATOR);
  out += ADAAEE::run();
  return out;
}

}