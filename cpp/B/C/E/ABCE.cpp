#include "ABCE.h"
#include "A/ABCEA.h"
#include "B/ABCEB.h"
#include "C/ABCEC.h"
#include "D/ABCED.h"
#include "E/ABCEE.h"

namespace ABCE {

std::string run() {
  std::string out("ABCE");
  out += std::string(SEPARATOR);
  out += ABCEA::run();
  out += std::string(SEPARATOR);
  out += ABCEB::run();
  out += std::string(SEPARATOR);
  out += ABCEC::run();
  out += std::string(SEPARATOR);
  out += ABCED::run();
  out += std::string(SEPARATOR);
  out += ABCEE::run();
  return out;
}

}