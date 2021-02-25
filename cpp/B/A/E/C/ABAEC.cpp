#include "ABAEC.h"
#include "A/ABAECA.h"
#include "B/ABAECB.h"
#include "C/ABAECC.h"
#include "D/ABAECD.h"
#include "E/ABAECE.h"

namespace ABAEC {

std::string run() {
  std::string out("ABAEC");
  out += std::string(SEPARATOR);
  out += ABAECA::run();
  out += std::string(SEPARATOR);
  out += ABAECB::run();
  out += std::string(SEPARATOR);
  out += ABAECC::run();
  out += std::string(SEPARATOR);
  out += ABAECD::run();
  out += std::string(SEPARATOR);
  out += ABAECE::run();
  return out;
}

}