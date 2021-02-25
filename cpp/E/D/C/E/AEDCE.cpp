#include "AEDCE.h"
#include "A/AEDCEA.h"
#include "B/AEDCEB.h"
#include "C/AEDCEC.h"
#include "D/AEDCED.h"
#include "E/AEDCEE.h"

namespace AEDCE {

std::string run() {
  std::string out("AEDCE");
  out += std::string(SEPARATOR);
  out += AEDCEA::run();
  out += std::string(SEPARATOR);
  out += AEDCEB::run();
  out += std::string(SEPARATOR);
  out += AEDCEC::run();
  out += std::string(SEPARATOR);
  out += AEDCED::run();
  out += std::string(SEPARATOR);
  out += AEDCEE::run();
  return out;
}

}