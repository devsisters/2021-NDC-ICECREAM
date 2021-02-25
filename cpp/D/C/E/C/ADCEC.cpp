#include "ADCEC.h"
#include "A/ADCECA.h"
#include "B/ADCECB.h"
#include "C/ADCECC.h"
#include "D/ADCECD.h"
#include "E/ADCECE.h"

namespace ADCEC {

std::string run() {
  std::string out("ADCEC");
  out += std::string(SEPARATOR);
  out += ADCECA::run();
  out += std::string(SEPARATOR);
  out += ADCECB::run();
  out += std::string(SEPARATOR);
  out += ADCECC::run();
  out += std::string(SEPARATOR);
  out += ADCECD::run();
  out += std::string(SEPARATOR);
  out += ADCECE::run();
  return out;
}

}