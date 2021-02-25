#include "ABCA.h"
#include "A/ABCAA.h"
#include "B/ABCAB.h"
#include "C/ABCAC.h"
#include "D/ABCAD.h"
#include "E/ABCAE.h"

namespace ABCA {

std::string run() {
  std::string out("ABCA");
  out += std::string(SEPARATOR);
  out += ABCAA::run();
  out += std::string(SEPARATOR);
  out += ABCAB::run();
  out += std::string(SEPARATOR);
  out += ABCAC::run();
  out += std::string(SEPARATOR);
  out += ABCAD::run();
  out += std::string(SEPARATOR);
  out += ABCAE::run();
  return out;
}

}