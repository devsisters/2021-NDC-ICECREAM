#include "ACCCB.h"
#include "A/ACCCBA.h"
#include "B/ACCCBB.h"
#include "C/ACCCBC.h"
#include "D/ACCCBD.h"
#include "E/ACCCBE.h"

namespace ACCCB {

std::string run() {
  std::string out("ACCCB");
  out += std::string(SEPARATOR);
  out += ACCCBA::run();
  out += std::string(SEPARATOR);
  out += ACCCBB::run();
  out += std::string(SEPARATOR);
  out += ACCCBC::run();
  out += std::string(SEPARATOR);
  out += ACCCBD::run();
  out += std::string(SEPARATOR);
  out += ACCCBE::run();
  return out;
}

}