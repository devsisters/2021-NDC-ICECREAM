#include "ADAEC.h"
#include "A/ADAECA.h"
#include "B/ADAECB.h"
#include "C/ADAECC.h"
#include "D/ADAECD.h"
#include "E/ADAECE.h"

namespace ADAEC {

std::string run() {
  std::string out("ADAEC");
  out += std::string(SEPARATOR);
  out += ADAECA::run();
  out += std::string(SEPARATOR);
  out += ADAECB::run();
  out += std::string(SEPARATOR);
  out += ADAECC::run();
  out += std::string(SEPARATOR);
  out += ADAECD::run();
  out += std::string(SEPARATOR);
  out += ADAECE::run();
  return out;
}

}