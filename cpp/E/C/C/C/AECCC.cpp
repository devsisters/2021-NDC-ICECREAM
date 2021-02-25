#include "AECCC.h"
#include "A/AECCCA.h"
#include "B/AECCCB.h"
#include "C/AECCCC.h"
#include "D/AECCCD.h"
#include "E/AECCCE.h"

namespace AECCC {

std::string run() {
  std::string out("AECCC");
  out += std::string(SEPARATOR);
  out += AECCCA::run();
  out += std::string(SEPARATOR);
  out += AECCCB::run();
  out += std::string(SEPARATOR);
  out += AECCCC::run();
  out += std::string(SEPARATOR);
  out += AECCCD::run();
  out += std::string(SEPARATOR);
  out += AECCCE::run();
  return out;
}

}