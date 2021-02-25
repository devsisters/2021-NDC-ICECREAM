#include "ACCDC.h"
#include "A/ACCDCA.h"
#include "B/ACCDCB.h"
#include "C/ACCDCC.h"
#include "D/ACCDCD.h"
#include "E/ACCDCE.h"

namespace ACCDC {

std::string run() {
  std::string out("ACCDC");
  out += std::string(SEPARATOR);
  out += ACCDCA::run();
  out += std::string(SEPARATOR);
  out += ACCDCB::run();
  out += std::string(SEPARATOR);
  out += ACCDCC::run();
  out += std::string(SEPARATOR);
  out += ACCDCD::run();
  out += std::string(SEPARATOR);
  out += ACCDCE::run();
  return out;
}

}