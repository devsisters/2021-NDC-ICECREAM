#include "AEDEC.h"
#include "A/AEDECA.h"
#include "B/AEDECB.h"
#include "C/AEDECC.h"
#include "D/AEDECD.h"
#include "E/AEDECE.h"

namespace AEDEC {

std::string run() {
  std::string out("AEDEC");
  out += std::string(SEPARATOR);
  out += AEDECA::run();
  out += std::string(SEPARATOR);
  out += AEDECB::run();
  out += std::string(SEPARATOR);
  out += AEDECC::run();
  out += std::string(SEPARATOR);
  out += AEDECD::run();
  out += std::string(SEPARATOR);
  out += AEDECE::run();
  return out;
}

}