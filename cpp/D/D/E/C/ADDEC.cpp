#include "ADDEC.h"
#include "A/ADDECA.h"
#include "B/ADDECB.h"
#include "C/ADDECC.h"
#include "D/ADDECD.h"
#include "E/ADDECE.h"

namespace ADDEC {

std::string run() {
  std::string out("ADDEC");
  out += std::string(SEPARATOR);
  out += ADDECA::run();
  out += std::string(SEPARATOR);
  out += ADDECB::run();
  out += std::string(SEPARATOR);
  out += ADDECC::run();
  out += std::string(SEPARATOR);
  out += ADDECD::run();
  out += std::string(SEPARATOR);
  out += ADDECE::run();
  return out;
}

}