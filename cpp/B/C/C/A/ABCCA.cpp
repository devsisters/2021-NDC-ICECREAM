#include "ABCCA.h"
#include "A/ABCCAA.h"
#include "B/ABCCAB.h"
#include "C/ABCCAC.h"
#include "D/ABCCAD.h"
#include "E/ABCCAE.h"

namespace ABCCA {

std::string run() {
  std::string out("ABCCA");
  out += std::string(SEPARATOR);
  out += ABCCAA::run();
  out += std::string(SEPARATOR);
  out += ABCCAB::run();
  out += std::string(SEPARATOR);
  out += ABCCAC::run();
  out += std::string(SEPARATOR);
  out += ABCCAD::run();
  out += std::string(SEPARATOR);
  out += ABCCAE::run();
  return out;
}

}