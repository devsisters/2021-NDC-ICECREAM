#include "ADEEC.h"
#include "A/ADEECA.h"
#include "B/ADEECB.h"
#include "C/ADEECC.h"
#include "D/ADEECD.h"
#include "E/ADEECE.h"

namespace ADEEC {

std::string run() {
  std::string out("ADEEC");
  out += std::string(SEPARATOR);
  out += ADEECA::run();
  out += std::string(SEPARATOR);
  out += ADEECB::run();
  out += std::string(SEPARATOR);
  out += ADEECC::run();
  out += std::string(SEPARATOR);
  out += ADEECD::run();
  out += std::string(SEPARATOR);
  out += ADEECE::run();
  return out;
}

}