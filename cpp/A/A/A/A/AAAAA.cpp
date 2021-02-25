#include "AAAAA.h"
#include "A/AAAAAA.h"
#include "B/AAAAAB.h"
#include "C/AAAAAC.h"
#include "D/AAAAAD.h"
#include "E/AAAAAE.h"

namespace AAAAA {

std::string run() {
  std::string out("AAAAA");
  out += std::string(SEPARATOR);
  out += AAAAAA::run();
  out += std::string(SEPARATOR);
  out += AAAAAB::run();
  out += std::string(SEPARATOR);
  out += AAAAAC::run();
  out += std::string(SEPARATOR);
  out += AAAAAD::run();
  out += std::string(SEPARATOR);
  out += AAAAAE::run();
  return out;
}

}