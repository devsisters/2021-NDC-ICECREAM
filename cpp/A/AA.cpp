#include "AA.h"
#include "A/AAA.h"
#include "B/AAB.h"
#include "C/AAC.h"
#include "D/AAD.h"
#include "E/AAE.h"

namespace AA {

std::string run() {
  std::string out("AA");
  out += std::string(SEPARATOR);
  out += AAA::run();
  out += std::string(SEPARATOR);
  out += AAB::run();
  out += std::string(SEPARATOR);
  out += AAC::run();
  out += std::string(SEPARATOR);
  out += AAD::run();
  out += std::string(SEPARATOR);
  out += AAE::run();
  return out;
}

}