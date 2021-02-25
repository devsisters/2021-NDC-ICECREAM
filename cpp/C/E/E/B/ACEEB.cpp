#include "ACEEB.h"
#include "A/ACEEBA.h"
#include "B/ACEEBB.h"
#include "C/ACEEBC.h"
#include "D/ACEEBD.h"
#include "E/ACEEBE.h"

namespace ACEEB {

std::string run() {
  std::string out("ACEEB");
  out += std::string(SEPARATOR);
  out += ACEEBA::run();
  out += std::string(SEPARATOR);
  out += ACEEBB::run();
  out += std::string(SEPARATOR);
  out += ACEEBC::run();
  out += std::string(SEPARATOR);
  out += ACEEBD::run();
  out += std::string(SEPARATOR);
  out += ACEEBE::run();
  return out;
}

}