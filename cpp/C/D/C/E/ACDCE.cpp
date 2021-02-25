#include "ACDCE.h"
#include "A/ACDCEA.h"
#include "B/ACDCEB.h"
#include "C/ACDCEC.h"
#include "D/ACDCED.h"
#include "E/ACDCEE.h"

namespace ACDCE {

std::string run() {
  std::string out("ACDCE");
  out += std::string(SEPARATOR);
  out += ACDCEA::run();
  out += std::string(SEPARATOR);
  out += ACDCEB::run();
  out += std::string(SEPARATOR);
  out += ACDCEC::run();
  out += std::string(SEPARATOR);
  out += ACDCED::run();
  out += std::string(SEPARATOR);
  out += ACDCEE::run();
  return out;
}

}