#include "ABCEC.h"
#include "A/ABCECA.h"
#include "B/ABCECB.h"
#include "C/ABCECC.h"
#include "D/ABCECD.h"
#include "E/ABCECE.h"

namespace ABCEC {

std::string run() {
  std::string out("ABCEC");
  out += std::string(SEPARATOR);
  out += ABCECA::run();
  out += std::string(SEPARATOR);
  out += ABCECB::run();
  out += std::string(SEPARATOR);
  out += ABCECC::run();
  out += std::string(SEPARATOR);
  out += ABCECD::run();
  out += std::string(SEPARATOR);
  out += ABCECE::run();
  return out;
}

}