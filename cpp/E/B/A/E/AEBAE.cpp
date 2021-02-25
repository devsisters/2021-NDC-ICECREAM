#include "AEBAE.h"
#include "A/AEBAEA.h"
#include "B/AEBAEB.h"
#include "C/AEBAEC.h"
#include "D/AEBAED.h"
#include "E/AEBAEE.h"

namespace AEBAE {

std::string run() {
  std::string out("AEBAE");
  out += std::string(SEPARATOR);
  out += AEBAEA::run();
  out += std::string(SEPARATOR);
  out += AEBAEB::run();
  out += std::string(SEPARATOR);
  out += AEBAEC::run();
  out += std::string(SEPARATOR);
  out += AEBAED::run();
  out += std::string(SEPARATOR);
  out += AEBAEE::run();
  return out;
}

}