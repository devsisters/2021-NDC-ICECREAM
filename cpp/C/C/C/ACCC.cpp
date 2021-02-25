#include "ACCC.h"
#include "A/ACCCA.h"
#include "B/ACCCB.h"
#include "C/ACCCC.h"
#include "D/ACCCD.h"
#include "E/ACCCE.h"

namespace ACCC {

std::string run() {
  std::string out("ACCC");
  out += std::string(SEPARATOR);
  out += ACCCA::run();
  out += std::string(SEPARATOR);
  out += ACCCB::run();
  out += std::string(SEPARATOR);
  out += ACCCC::run();
  out += std::string(SEPARATOR);
  out += ACCCD::run();
  out += std::string(SEPARATOR);
  out += ACCCE::run();
  return out;
}

}