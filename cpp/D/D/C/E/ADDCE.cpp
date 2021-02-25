#include "ADDCE.h"
#include "A/ADDCEA.h"
#include "B/ADDCEB.h"
#include "C/ADDCEC.h"
#include "D/ADDCED.h"
#include "E/ADDCEE.h"

namespace ADDCE {

std::string run() {
  std::string out("ADDCE");
  out += std::string(SEPARATOR);
  out += ADDCEA::run();
  out += std::string(SEPARATOR);
  out += ADDCEB::run();
  out += std::string(SEPARATOR);
  out += ADDCEC::run();
  out += std::string(SEPARATOR);
  out += ADDCED::run();
  out += std::string(SEPARATOR);
  out += ADDCEE::run();
  return out;
}

}