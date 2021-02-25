#include "AACEC.h"
#include "A/AACECA.h"
#include "B/AACECB.h"
#include "C/AACECC.h"
#include "D/AACECD.h"
#include "E/AACECE.h"

namespace AACEC {

std::string run() {
  std::string out("AACEC");
  out += std::string(SEPARATOR);
  out += AACECA::run();
  out += std::string(SEPARATOR);
  out += AACECB::run();
  out += std::string(SEPARATOR);
  out += AACECC::run();
  out += std::string(SEPARATOR);
  out += AACECD::run();
  out += std::string(SEPARATOR);
  out += AACECE::run();
  return out;
}

}