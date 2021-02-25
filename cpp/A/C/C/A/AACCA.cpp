#include "AACCA.h"
#include "A/AACCAA.h"
#include "B/AACCAB.h"
#include "C/AACCAC.h"
#include "D/AACCAD.h"
#include "E/AACCAE.h"

namespace AACCA {

std::string run() {
  std::string out("AACCA");
  out += std::string(SEPARATOR);
  out += AACCAA::run();
  out += std::string(SEPARATOR);
  out += AACCAB::run();
  out += std::string(SEPARATOR);
  out += AACCAC::run();
  out += std::string(SEPARATOR);
  out += AACCAD::run();
  out += std::string(SEPARATOR);
  out += AACCAE::run();
  return out;
}

}