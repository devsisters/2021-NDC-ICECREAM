#include "ABEEC.h"
#include "A/ABEECA.h"
#include "B/ABEECB.h"
#include "C/ABEECC.h"
#include "D/ABEECD.h"
#include "E/ABEECE.h"

namespace ABEEC {

std::string run() {
  std::string out("ABEEC");
  out += std::string(SEPARATOR);
  out += ABEECA::run();
  out += std::string(SEPARATOR);
  out += ABEECB::run();
  out += std::string(SEPARATOR);
  out += ABEECC::run();
  out += std::string(SEPARATOR);
  out += ABEECD::run();
  out += std::string(SEPARATOR);
  out += ABEECE::run();
  return out;
}

}