#include "AEBEC.h"
#include "A/AEBECA.h"
#include "B/AEBECB.h"
#include "C/AEBECC.h"
#include "D/AEBECD.h"
#include "E/AEBECE.h"

namespace AEBEC {

std::string run() {
  std::string out("AEBEC");
  out += std::string(SEPARATOR);
  out += AEBECA::run();
  out += std::string(SEPARATOR);
  out += AEBECB::run();
  out += std::string(SEPARATOR);
  out += AEBECC::run();
  out += std::string(SEPARATOR);
  out += AEBECD::run();
  out += std::string(SEPARATOR);
  out += AEBECE::run();
  return out;
}

}