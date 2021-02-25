#include "ACBBE.h"
#include "A/ACBBEA.h"
#include "B/ACBBEB.h"
#include "C/ACBBEC.h"
#include "D/ACBBED.h"
#include "E/ACBBEE.h"

namespace ACBBE {

std::string run() {
  std::string out("ACBBE");
  out += std::string(SEPARATOR);
  out += ACBBEA::run();
  out += std::string(SEPARATOR);
  out += ACBBEB::run();
  out += std::string(SEPARATOR);
  out += ACBBEC::run();
  out += std::string(SEPARATOR);
  out += ACBBED::run();
  out += std::string(SEPARATOR);
  out += ACBBEE::run();
  return out;
}

}