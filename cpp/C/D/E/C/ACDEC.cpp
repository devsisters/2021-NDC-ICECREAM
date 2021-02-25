#include "ACDEC.h"
#include "A/ACDECA.h"
#include "B/ACDECB.h"
#include "C/ACDECC.h"
#include "D/ACDECD.h"
#include "E/ACDECE.h"

namespace ACDEC {

std::string run() {
  std::string out("ACDEC");
  out += std::string(SEPARATOR);
  out += ACDECA::run();
  out += std::string(SEPARATOR);
  out += ACDECB::run();
  out += std::string(SEPARATOR);
  out += ACDECC::run();
  out += std::string(SEPARATOR);
  out += ACDECD::run();
  out += std::string(SEPARATOR);
  out += ACDECE::run();
  return out;
}

}