#include "ACBBC.h"
#include "A/ACBBCA.h"
#include "B/ACBBCB.h"
#include "C/ACBBCC.h"
#include "D/ACBBCD.h"
#include "E/ACBBCE.h"

namespace ACBBC {

std::string run() {
  std::string out("ACBBC");
  out += std::string(SEPARATOR);
  out += ACBBCA::run();
  out += std::string(SEPARATOR);
  out += ACBBCB::run();
  out += std::string(SEPARATOR);
  out += ACBBCC::run();
  out += std::string(SEPARATOR);
  out += ACBBCD::run();
  out += std::string(SEPARATOR);
  out += ACBBCE::run();
  return out;
}

}