#include "AEDCA.h"
#include "A/AEDCAA.h"
#include "B/AEDCAB.h"
#include "C/AEDCAC.h"
#include "D/AEDCAD.h"
#include "E/AEDCAE.h"

namespace AEDCA {

std::string run() {
  std::string out("AEDCA");
  out += std::string(SEPARATOR);
  out += AEDCAA::run();
  out += std::string(SEPARATOR);
  out += AEDCAB::run();
  out += std::string(SEPARATOR);
  out += AEDCAC::run();
  out += std::string(SEPARATOR);
  out += AEDCAD::run();
  out += std::string(SEPARATOR);
  out += AEDCAE::run();
  return out;
}

}