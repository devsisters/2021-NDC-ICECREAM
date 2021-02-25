#include "AAAEC.h"
#include "A/AAAECA.h"
#include "B/AAAECB.h"
#include "C/AAAECC.h"
#include "D/AAAECD.h"
#include "E/AAAECE.h"

namespace AAAEC {

std::string run() {
  std::string out("AAAEC");
  out += std::string(SEPARATOR);
  out += AAAECA::run();
  out += std::string(SEPARATOR);
  out += AAAECB::run();
  out += std::string(SEPARATOR);
  out += AAAECC::run();
  out += std::string(SEPARATOR);
  out += AAAECD::run();
  out += std::string(SEPARATOR);
  out += AAAECE::run();
  return out;
}

}