#include "AEBCE.h"
#include "A/AEBCEA.h"
#include "B/AEBCEB.h"
#include "C/AEBCEC.h"
#include "D/AEBCED.h"
#include "E/AEBCEE.h"

namespace AEBCE {

std::string run() {
  std::string out("AEBCE");
  out += std::string(SEPARATOR);
  out += AEBCEA::run();
  out += std::string(SEPARATOR);
  out += AEBCEB::run();
  out += std::string(SEPARATOR);
  out += AEBCEC::run();
  out += std::string(SEPARATOR);
  out += AEBCED::run();
  out += std::string(SEPARATOR);
  out += AEBCEE::run();
  return out;
}

}