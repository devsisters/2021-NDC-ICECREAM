#include "ACCBC.h"
#include "A/ACCBCA.h"
#include "B/ACCBCB.h"
#include "C/ACCBCC.h"
#include "D/ACCBCD.h"
#include "E/ACCBCE.h"

namespace ACCBC {

std::string run() {
  std::string out("ACCBC");
  out += std::string(SEPARATOR);
  out += ACCBCA::run();
  out += std::string(SEPARATOR);
  out += ACCBCB::run();
  out += std::string(SEPARATOR);
  out += ACCBCC::run();
  out += std::string(SEPARATOR);
  out += ACCBCD::run();
  out += std::string(SEPARATOR);
  out += ACCBCE::run();
  return out;
}

}