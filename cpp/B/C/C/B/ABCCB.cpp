#include "ABCCB.h"
#include "A/ABCCBA.h"
#include "B/ABCCBB.h"
#include "C/ABCCBC.h"
#include "D/ABCCBD.h"
#include "E/ABCCBE.h"

namespace ABCCB {

std::string run() {
  std::string out("ABCCB");
  out += std::string(SEPARATOR);
  out += ABCCBA::run();
  out += std::string(SEPARATOR);
  out += ABCCBB::run();
  out += std::string(SEPARATOR);
  out += ABCCBC::run();
  out += std::string(SEPARATOR);
  out += ABCCBD::run();
  out += std::string(SEPARATOR);
  out += ABCCBE::run();
  return out;
}

}