#include "ADBBA.h"
#include "A/ADBBAA.h"
#include "B/ADBBAB.h"
#include "C/ADBBAC.h"
#include "D/ADBBAD.h"
#include "E/ADBBAE.h"

namespace ADBBA {

std::string run() {
  std::string out("ADBBA");
  out += std::string(SEPARATOR);
  out += ADBBAA::run();
  out += std::string(SEPARATOR);
  out += ADBBAB::run();
  out += std::string(SEPARATOR);
  out += ADBBAC::run();
  out += std::string(SEPARATOR);
  out += ADBBAD::run();
  out += std::string(SEPARATOR);
  out += ADBBAE::run();
  return out;
}

}