#include "ACABB.h"
#include "A/ACABBA.h"
#include "B/ACABBB.h"
#include "C/ACABBC.h"
#include "D/ACABBD.h"
#include "E/ACABBE.h"

namespace ACABB {

std::string run() {
  std::string out("ACABB");
  out += std::string(SEPARATOR);
  out += ACABBA::run();
  out += std::string(SEPARATOR);
  out += ACABBB::run();
  out += std::string(SEPARATOR);
  out += ACABBC::run();
  out += std::string(SEPARATOR);
  out += ACABBD::run();
  out += std::string(SEPARATOR);
  out += ACABBE::run();
  return out;
}

}