#include "AECEA.h"
#include "A/AECEAA.h"
#include "B/AECEAB.h"
#include "C/AECEAC.h"
#include "D/AECEAD.h"
#include "E/AECEAE.h"

namespace AECEA {

std::string run() {
  std::string out("AECEA");
  out += std::string(SEPARATOR);
  out += AECEAA::run();
  out += std::string(SEPARATOR);
  out += AECEAB::run();
  out += std::string(SEPARATOR);
  out += AECEAC::run();
  out += std::string(SEPARATOR);
  out += AECEAD::run();
  out += std::string(SEPARATOR);
  out += AECEAE::run();
  return out;
}

}