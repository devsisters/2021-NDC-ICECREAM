#include "AABCE.h"
#include "A/AABCEA.h"
#include "B/AABCEB.h"
#include "C/AABCEC.h"
#include "D/AABCED.h"
#include "E/AABCEE.h"

namespace AABCE {

std::string run() {
  std::string out("AABCE");
  out += std::string(SEPARATOR);
  out += AABCEA::run();
  out += std::string(SEPARATOR);
  out += AABCEB::run();
  out += std::string(SEPARATOR);
  out += AABCEC::run();
  out += std::string(SEPARATOR);
  out += AABCED::run();
  out += std::string(SEPARATOR);
  out += AABCEE::run();
  return out;
}

}