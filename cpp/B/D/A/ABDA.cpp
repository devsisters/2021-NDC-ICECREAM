#include "ABDA.h"
#include "A/ABDAA.h"
#include "B/ABDAB.h"
#include "C/ABDAC.h"
#include "D/ABDAD.h"
#include "E/ABDAE.h"

namespace ABDA {

std::string run() {
  std::string out("ABDA");
  out += std::string(SEPARATOR);
  out += ABDAA::run();
  out += std::string(SEPARATOR);
  out += ABDAB::run();
  out += std::string(SEPARATOR);
  out += ABDAC::run();
  out += std::string(SEPARATOR);
  out += ABDAD::run();
  out += std::string(SEPARATOR);
  out += ABDAE::run();
  return out;
}

}