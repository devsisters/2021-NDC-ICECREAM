#include "ADABC.h"
#include "A/ADABCA.h"
#include "B/ADABCB.h"
#include "C/ADABCC.h"
#include "D/ADABCD.h"
#include "E/ADABCE.h"

namespace ADABC {

std::string run() {
  std::string out("ADABC");
  out += std::string(SEPARATOR);
  out += ADABCA::run();
  out += std::string(SEPARATOR);
  out += ADABCB::run();
  out += std::string(SEPARATOR);
  out += ADABCC::run();
  out += std::string(SEPARATOR);
  out += ADABCD::run();
  out += std::string(SEPARATOR);
  out += ADABCE::run();
  return out;
}

}