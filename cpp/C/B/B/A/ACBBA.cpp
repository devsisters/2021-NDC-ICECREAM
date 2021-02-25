#include "ACBBA.h"
#include "A/ACBBAA.h"
#include "B/ACBBAB.h"
#include "C/ACBBAC.h"
#include "D/ACBBAD.h"
#include "E/ACBBAE.h"

namespace ACBBA {

std::string run() {
  std::string out("ACBBA");
  out += std::string(SEPARATOR);
  out += ACBBAA::run();
  out += std::string(SEPARATOR);
  out += ACBBAB::run();
  out += std::string(SEPARATOR);
  out += ACBBAC::run();
  out += std::string(SEPARATOR);
  out += ACBBAD::run();
  out += std::string(SEPARATOR);
  out += ACBBAE::run();
  return out;
}

}