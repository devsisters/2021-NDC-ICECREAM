#include "ABDEC.h"
#include "A/ABDECA.h"
#include "B/ABDECB.h"
#include "C/ABDECC.h"
#include "D/ABDECD.h"
#include "E/ABDECE.h"

namespace ABDEC {

std::string run() {
  std::string out("ABDEC");
  out += std::string(SEPARATOR);
  out += ABDECA::run();
  out += std::string(SEPARATOR);
  out += ABDECB::run();
  out += std::string(SEPARATOR);
  out += ABDECC::run();
  out += std::string(SEPARATOR);
  out += ABDECD::run();
  out += std::string(SEPARATOR);
  out += ABDECE::run();
  return out;
}

}