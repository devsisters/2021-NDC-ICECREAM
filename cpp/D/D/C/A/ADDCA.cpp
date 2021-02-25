#include "ADDCA.h"
#include "A/ADDCAA.h"
#include "B/ADDCAB.h"
#include "C/ADDCAC.h"
#include "D/ADDCAD.h"
#include "E/ADDCAE.h"

namespace ADDCA {

std::string run() {
  std::string out("ADDCA");
  out += std::string(SEPARATOR);
  out += ADDCAA::run();
  out += std::string(SEPARATOR);
  out += ADDCAB::run();
  out += std::string(SEPARATOR);
  out += ADDCAC::run();
  out += std::string(SEPARATOR);
  out += ADDCAD::run();
  out += std::string(SEPARATOR);
  out += ADDCAE::run();
  return out;
}

}