#include "ADEEB.h"
#include "A/ADEEBA.h"
#include "B/ADEEBB.h"
#include "C/ADEEBC.h"
#include "D/ADEEBD.h"
#include "E/ADEEBE.h"

namespace ADEEB {

std::string run() {
  std::string out("ADEEB");
  out += std::string(SEPARATOR);
  out += ADEEBA::run();
  out += std::string(SEPARATOR);
  out += ADEEBB::run();
  out += std::string(SEPARATOR);
  out += ADEEBC::run();
  out += std::string(SEPARATOR);
  out += ADEEBD::run();
  out += std::string(SEPARATOR);
  out += ADEEBE::run();
  return out;
}

}