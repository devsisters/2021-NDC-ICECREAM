#include "ABCEA.h"
#include "A/ABCEAA.h"
#include "B/ABCEAB.h"
#include "C/ABCEAC.h"
#include "D/ABCEAD.h"
#include "E/ABCEAE.h"

namespace ABCEA {

std::string run() {
  std::string out("ABCEA");
  out += std::string(SEPARATOR);
  out += ABCEAA::run();
  out += std::string(SEPARATOR);
  out += ABCEAB::run();
  out += std::string(SEPARATOR);
  out += ABCEAC::run();
  out += std::string(SEPARATOR);
  out += ABCEAD::run();
  out += std::string(SEPARATOR);
  out += ABCEAE::run();
  return out;
}

}