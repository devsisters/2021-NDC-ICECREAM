#include "AECCB.h"
#include "A/AECCBA.h"
#include "B/AECCBB.h"
#include "C/AECCBC.h"
#include "D/AECCBD.h"
#include "E/AECCBE.h"

namespace AECCB {

std::string run() {
  std::string out("AECCB");
  out += std::string(SEPARATOR);
  out += AECCBA::run();
  out += std::string(SEPARATOR);
  out += AECCBB::run();
  out += std::string(SEPARATOR);
  out += AECCBC::run();
  out += std::string(SEPARATOR);
  out += AECCBD::run();
  out += std::string(SEPARATOR);
  out += AECCBE::run();
  return out;
}

}