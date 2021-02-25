#include "ACACA.h"
#include "A/ACACAA.h"
#include "B/ACACAB.h"
#include "C/ACACAC.h"
#include "D/ACACAD.h"
#include "E/ACACAE.h"

namespace ACACA {

std::string run() {
  std::string out("ACACA");
  out += std::string(SEPARATOR);
  out += ACACAA::run();
  out += std::string(SEPARATOR);
  out += ACACAB::run();
  out += std::string(SEPARATOR);
  out += ACACAC::run();
  out += std::string(SEPARATOR);
  out += ACACAD::run();
  out += std::string(SEPARATOR);
  out += ACACAE::run();
  return out;
}

}