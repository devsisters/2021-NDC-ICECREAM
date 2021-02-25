#include "ADBBB.h"
#include "A/ADBBBA.h"
#include "B/ADBBBB.h"
#include "C/ADBBBC.h"
#include "D/ADBBBD.h"
#include "E/ADBBBE.h"

namespace ADBBB {

std::string run() {
  std::string out("ADBBB");
  out += std::string(SEPARATOR);
  out += ADBBBA::run();
  out += std::string(SEPARATOR);
  out += ADBBBB::run();
  out += std::string(SEPARATOR);
  out += ADBBBC::run();
  out += std::string(SEPARATOR);
  out += ADBBBD::run();
  out += std::string(SEPARATOR);
  out += ADBBBE::run();
  return out;
}

}