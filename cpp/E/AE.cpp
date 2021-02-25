#include "AE.h"
#include "A/AEA.h"
#include "B/AEB.h"
#include "C/AEC.h"
#include "D/AED.h"
#include "E/AEE.h"

namespace AE {

std::string run() {
  std::string out("AE");
  out += std::string(SEPARATOR);
  out += AEA::run();
  out += std::string(SEPARATOR);
  out += AEB::run();
  out += std::string(SEPARATOR);
  out += AEC::run();
  out += std::string(SEPARATOR);
  out += AED::run();
  out += std::string(SEPARATOR);
  out += AEE::run();
  return out;
}

}