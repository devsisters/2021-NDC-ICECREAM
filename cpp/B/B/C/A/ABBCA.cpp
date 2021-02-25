#include "ABBCA.h"
#include "A/ABBCAA.h"
#include "B/ABBCAB.h"
#include "C/ABBCAC.h"
#include "D/ABBCAD.h"
#include "E/ABBCAE.h"

namespace ABBCA {

std::string run() {
  std::string out("ABBCA");
  out += std::string(SEPARATOR);
  out += ABBCAA::run();
  out += std::string(SEPARATOR);
  out += ABBCAB::run();
  out += std::string(SEPARATOR);
  out += ABBCAC::run();
  out += std::string(SEPARATOR);
  out += ABBCAD::run();
  out += std::string(SEPARATOR);
  out += ABBCAE::run();
  return out;
}

}