#include "ABDCE.h"
#include "A/ABDCEA.h"
#include "B/ABDCEB.h"
#include "C/ABDCEC.h"
#include "D/ABDCED.h"
#include "E/ABDCEE.h"

namespace ABDCE {

std::string run() {
  std::string out("ABDCE");
  out += std::string(SEPARATOR);
  out += ABDCEA::run();
  out += std::string(SEPARATOR);
  out += ABDCEB::run();
  out += std::string(SEPARATOR);
  out += ABDCEC::run();
  out += std::string(SEPARATOR);
  out += ABDCED::run();
  out += std::string(SEPARATOR);
  out += ABDCEE::run();
  return out;
}

}