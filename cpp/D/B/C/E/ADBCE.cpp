#include "ADBCE.h"
#include "A/ADBCEA.h"
#include "B/ADBCEB.h"
#include "C/ADBCEC.h"
#include "D/ADBCED.h"
#include "E/ADBCEE.h"

namespace ADBCE {

std::string run() {
  std::string out("ADBCE");
  out += std::string(SEPARATOR);
  out += ADBCEA::run();
  out += std::string(SEPARATOR);
  out += ADBCEB::run();
  out += std::string(SEPARATOR);
  out += ADBCEC::run();
  out += std::string(SEPARATOR);
  out += ADBCED::run();
  out += std::string(SEPARATOR);
  out += ADBCEE::run();
  return out;
}

}