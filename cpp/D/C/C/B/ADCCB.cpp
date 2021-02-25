#include "ADCCB.h"
#include "A/ADCCBA.h"
#include "B/ADCCBB.h"
#include "C/ADCCBC.h"
#include "D/ADCCBD.h"
#include "E/ADCCBE.h"

namespace ADCCB {

std::string run() {
  std::string out("ADCCB");
  out += std::string(SEPARATOR);
  out += ADCCBA::run();
  out += std::string(SEPARATOR);
  out += ADCCBB::run();
  out += std::string(SEPARATOR);
  out += ADCCBC::run();
  out += std::string(SEPARATOR);
  out += ADCCBD::run();
  out += std::string(SEPARATOR);
  out += ADCCBE::run();
  return out;
}

}