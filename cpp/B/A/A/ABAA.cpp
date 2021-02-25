#include "ABAA.h"
#include "A/ABAAA.h"
#include "B/ABAAB.h"
#include "C/ABAAC.h"
#include "D/ABAAD.h"
#include "E/ABAAE.h"

namespace ABAA {

std::string run() {
  std::string out("ABAA");
  out += std::string(SEPARATOR);
  out += ABAAA::run();
  out += std::string(SEPARATOR);
  out += ABAAB::run();
  out += std::string(SEPARATOR);
  out += ABAAC::run();
  out += std::string(SEPARATOR);
  out += ABAAD::run();
  out += std::string(SEPARATOR);
  out += ABAAE::run();
  return out;
}

}