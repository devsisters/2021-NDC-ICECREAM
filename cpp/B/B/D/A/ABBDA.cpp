#include "ABBDA.h"
#include "A/ABBDAA.h"
#include "B/ABBDAB.h"
#include "C/ABBDAC.h"
#include "D/ABBDAD.h"
#include "E/ABBDAE.h"

namespace ABBDA {

std::string run() {
  std::string out("ABBDA");
  out += std::string(SEPARATOR);
  out += ABBDAA::run();
  out += std::string(SEPARATOR);
  out += ABBDAB::run();
  out += std::string(SEPARATOR);
  out += ABBDAC::run();
  out += std::string(SEPARATOR);
  out += ABBDAD::run();
  out += std::string(SEPARATOR);
  out += ABBDAE::run();
  return out;
}

}