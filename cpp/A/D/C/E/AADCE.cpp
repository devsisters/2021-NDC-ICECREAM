#include "AADCE.h"
#include "A/AADCEA.h"
#include "B/AADCEB.h"
#include "C/AADCEC.h"
#include "D/AADCED.h"
#include "E/AADCEE.h"

namespace AADCE {

std::string run() {
  std::string out("AADCE");
  out += std::string(SEPARATOR);
  out += AADCEA::run();
  out += std::string(SEPARATOR);
  out += AADCEB::run();
  out += std::string(SEPARATOR);
  out += AADCEC::run();
  out += std::string(SEPARATOR);
  out += AADCED::run();
  out += std::string(SEPARATOR);
  out += AADCEE::run();
  return out;
}

}