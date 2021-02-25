#include "ADABB.h"
#include "A/ADABBA.h"
#include "B/ADABBB.h"
#include "C/ADABBC.h"
#include "D/ADABBD.h"
#include "E/ADABBE.h"

namespace ADABB {

std::string run() {
  std::string out("ADABB");
  out += std::string(SEPARATOR);
  out += ADABBA::run();
  out += std::string(SEPARATOR);
  out += ADABBB::run();
  out += std::string(SEPARATOR);
  out += ADABBC::run();
  out += std::string(SEPARATOR);
  out += ADABBD::run();
  out += std::string(SEPARATOR);
  out += ADABBE::run();
  return out;
}

}