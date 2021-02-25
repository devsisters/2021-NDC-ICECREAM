#include "ABBCB.h"
#include "A/ABBCBA.h"
#include "B/ABBCBB.h"
#include "C/ABBCBC.h"
#include "D/ABBCBD.h"
#include "E/ABBCBE.h"

namespace ABBCB {

std::string run() {
  std::string out("ABBCB");
  out += std::string(SEPARATOR);
  out += ABBCBA::run();
  out += std::string(SEPARATOR);
  out += ABBCBB::run();
  out += std::string(SEPARATOR);
  out += ABBCBC::run();
  out += std::string(SEPARATOR);
  out += ABBCBD::run();
  out += std::string(SEPARATOR);
  out += ABBCBE::run();
  return out;
}

}