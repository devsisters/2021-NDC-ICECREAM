#include "ACCCC.h"
#include "A/ACCCCA.h"
#include "B/ACCCCB.h"
#include "C/ACCCCC.h"
#include "D/ACCCCD.h"
#include "E/ACCCCE.h"

namespace ACCCC {

std::string run() {
  std::string out("ACCCC");
  out += std::string(SEPARATOR);
  out += ACCCCA::run();
  out += std::string(SEPARATOR);
  out += ACCCCB::run();
  out += std::string(SEPARATOR);
  out += ACCCCC::run();
  out += std::string(SEPARATOR);
  out += ACCCCD::run();
  out += std::string(SEPARATOR);
  out += ACCCCE::run();
  return out;
}

}