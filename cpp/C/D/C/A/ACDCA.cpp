#include "ACDCA.h"
#include "A/ACDCAA.h"
#include "B/ACDCAB.h"
#include "C/ACDCAC.h"
#include "D/ACDCAD.h"
#include "E/ACDCAE.h"

namespace ACDCA {

std::string run() {
  std::string out("ACDCA");
  out += std::string(SEPARATOR);
  out += ACDCAA::run();
  out += std::string(SEPARATOR);
  out += ACDCAB::run();
  out += std::string(SEPARATOR);
  out += ACDCAC::run();
  out += std::string(SEPARATOR);
  out += ACDCAD::run();
  out += std::string(SEPARATOR);
  out += ACDCAE::run();
  return out;
}

}