#include "AADEC.h"
#include "A/AADECA.h"
#include "B/AADECB.h"
#include "C/AADECC.h"
#include "D/AADECD.h"
#include "E/AADECE.h"

namespace AADEC {

std::string run() {
  std::string out("AADEC");
  out += std::string(SEPARATOR);
  out += AADECA::run();
  out += std::string(SEPARATOR);
  out += AADECB::run();
  out += std::string(SEPARATOR);
  out += AADECC::run();
  out += std::string(SEPARATOR);
  out += AADECD::run();
  out += std::string(SEPARATOR);
  out += AADECE::run();
  return out;
}

}