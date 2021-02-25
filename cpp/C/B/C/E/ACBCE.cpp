#include "ACBCE.h"
#include "A/ACBCEA.h"
#include "B/ACBCEB.h"
#include "C/ACBCEC.h"
#include "D/ACBCED.h"
#include "E/ACBCEE.h"

namespace ACBCE {

std::string run() {
  std::string out("ACBCE");
  out += std::string(SEPARATOR);
  out += ACBCEA::run();
  out += std::string(SEPARATOR);
  out += ACBCEB::run();
  out += std::string(SEPARATOR);
  out += ACBCEC::run();
  out += std::string(SEPARATOR);
  out += ACBCED::run();
  out += std::string(SEPARATOR);
  out += ACBCEE::run();
  return out;
}

}