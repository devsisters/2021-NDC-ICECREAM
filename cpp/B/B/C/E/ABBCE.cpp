#include "ABBCE.h"
#include "A/ABBCEA.h"
#include "B/ABBCEB.h"
#include "C/ABBCEC.h"
#include "D/ABBCED.h"
#include "E/ABBCEE.h"

namespace ABBCE {

std::string run() {
  std::string out("ABBCE");
  out += std::string(SEPARATOR);
  out += ABBCEA::run();
  out += std::string(SEPARATOR);
  out += ABBCEB::run();
  out += std::string(SEPARATOR);
  out += ABBCEC::run();
  out += std::string(SEPARATOR);
  out += ABBCED::run();
  out += std::string(SEPARATOR);
  out += ABBCEE::run();
  return out;
}

}