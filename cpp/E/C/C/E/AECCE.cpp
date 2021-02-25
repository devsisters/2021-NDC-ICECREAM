#include "AECCE.h"
#include "A/AECCEA.h"
#include "B/AECCEB.h"
#include "C/AECCEC.h"
#include "D/AECCED.h"
#include "E/AECCEE.h"

namespace AECCE {

std::string run() {
  std::string out("AECCE");
  out += std::string(SEPARATOR);
  out += AECCEA::run();
  out += std::string(SEPARATOR);
  out += AECCEB::run();
  out += std::string(SEPARATOR);
  out += AECCEC::run();
  out += std::string(SEPARATOR);
  out += AECCED::run();
  out += std::string(SEPARATOR);
  out += AECCEE::run();
  return out;
}

}