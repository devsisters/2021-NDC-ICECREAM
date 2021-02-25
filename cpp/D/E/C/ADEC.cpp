#include "ADEC.h"
#include "A/ADECA.h"
#include "B/ADECB.h"
#include "C/ADECC.h"
#include "D/ADECD.h"
#include "E/ADECE.h"

namespace ADEC {

std::string run() {
  std::string out("ADEC");
  out += std::string(SEPARATOR);
  out += ADECA::run();
  out += std::string(SEPARATOR);
  out += ADECB::run();
  out += std::string(SEPARATOR);
  out += ADECC::run();
  out += std::string(SEPARATOR);
  out += ADECD::run();
  out += std::string(SEPARATOR);
  out += ADECE::run();
  return out;
}

}