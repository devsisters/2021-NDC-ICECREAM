#include "ADDCB.h"
#include "A/ADDCBA.h"
#include "B/ADDCBB.h"
#include "C/ADDCBC.h"
#include "D/ADDCBD.h"
#include "E/ADDCBE.h"

namespace ADDCB {

std::string run() {
  std::string out("ADDCB");
  out += std::string(SEPARATOR);
  out += ADDCBA::run();
  out += std::string(SEPARATOR);
  out += ADDCBB::run();
  out += std::string(SEPARATOR);
  out += ADDCBC::run();
  out += std::string(SEPARATOR);
  out += ADDCBD::run();
  out += std::string(SEPARATOR);
  out += ADDCBE::run();
  return out;
}

}