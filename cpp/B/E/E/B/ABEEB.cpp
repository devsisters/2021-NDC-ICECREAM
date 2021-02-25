#include "ABEEB.h"
#include "A/ABEEBA.h"
#include "B/ABEEBB.h"
#include "C/ABEEBC.h"
#include "D/ABEEBD.h"
#include "E/ABEEBE.h"

namespace ABEEB {

std::string run() {
  std::string out("ABEEB");
  out += std::string(SEPARATOR);
  out += ABEEBA::run();
  out += std::string(SEPARATOR);
  out += ABEEBB::run();
  out += std::string(SEPARATOR);
  out += ABEEBC::run();
  out += std::string(SEPARATOR);
  out += ABEEBD::run();
  out += std::string(SEPARATOR);
  out += ABEEBE::run();
  return out;
}

}