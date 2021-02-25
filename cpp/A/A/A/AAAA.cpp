#include "AAAA.h"
#include "A/AAAAA.h"
#include "B/AAAAB.h"
#include "C/AAAAC.h"
#include "D/AAAAD.h"
#include "E/AAAAE.h"

namespace AAAA {

std::string run() {
  std::string out("AAAA");
  out += std::string(SEPARATOR);
  out += AAAAA::run();
  out += std::string(SEPARATOR);
  out += AAAAB::run();
  out += std::string(SEPARATOR);
  out += AAAAC::run();
  out += std::string(SEPARATOR);
  out += AAAAD::run();
  out += std::string(SEPARATOR);
  out += AAAAE::run();
  return out;
}

}