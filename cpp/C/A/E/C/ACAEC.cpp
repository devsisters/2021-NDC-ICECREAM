#include "ACAEC.h"
#include "A/ACAECA.h"
#include "B/ACAECB.h"
#include "C/ACAECC.h"
#include "D/ACAECD.h"
#include "E/ACAECE.h"

namespace ACAEC {

std::string run() {
  std::string out("ACAEC");
  out += std::string(SEPARATOR);
  out += ACAECA::run();
  out += std::string(SEPARATOR);
  out += ACAECB::run();
  out += std::string(SEPARATOR);
  out += ACAECC::run();
  out += std::string(SEPARATOR);
  out += ACAECD::run();
  out += std::string(SEPARATOR);
  out += ACAECE::run();
  return out;
}

}