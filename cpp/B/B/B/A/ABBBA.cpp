#include "ABBBA.h"
#include "A/ABBBAA.h"
#include "B/ABBBAB.h"
#include "C/ABBBAC.h"
#include "D/ABBBAD.h"
#include "E/ABBBAE.h"

namespace ABBBA {

std::string run() {
  std::string out("ABBBA");
  out += std::string(SEPARATOR);
  out += ABBBAA::run();
  out += std::string(SEPARATOR);
  out += ABBBAB::run();
  out += std::string(SEPARATOR);
  out += ABBBAC::run();
  out += std::string(SEPARATOR);
  out += ABBBAD::run();
  out += std::string(SEPARATOR);
  out += ABBBAE::run();
  return out;
}

}