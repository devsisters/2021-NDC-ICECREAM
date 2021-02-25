#include "ACACE.h"
#include "A/ACACEA.h"
#include "B/ACACEB.h"
#include "C/ACACEC.h"
#include "D/ACACED.h"
#include "E/ACACEE.h"

namespace ACACE {

std::string run() {
  std::string out("ACACE");
  out += std::string(SEPARATOR);
  out += ACACEA::run();
  out += std::string(SEPARATOR);
  out += ACACEB::run();
  out += std::string(SEPARATOR);
  out += ACACEC::run();
  out += std::string(SEPARATOR);
  out += ACACED::run();
  out += std::string(SEPARATOR);
  out += ACACEE::run();
  return out;
}

}