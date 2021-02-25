#include "ACBAE.h"
#include "A/ACBAEA.h"
#include "B/ACBAEB.h"
#include "C/ACBAEC.h"
#include "D/ACBAED.h"
#include "E/ACBAEE.h"

namespace ACBAE {

std::string run() {
  std::string out("ACBAE");
  out += std::string(SEPARATOR);
  out += ACBAEA::run();
  out += std::string(SEPARATOR);
  out += ACBAEB::run();
  out += std::string(SEPARATOR);
  out += ACBAEC::run();
  out += std::string(SEPARATOR);
  out += ACBAED::run();
  out += std::string(SEPARATOR);
  out += ACBAEE::run();
  return out;
}

}