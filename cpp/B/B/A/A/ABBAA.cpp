#include "ABBAA.h"
#include "A/ABBAAA.h"
#include "B/ABBAAB.h"
#include "C/ABBAAC.h"
#include "D/ABBAAD.h"
#include "E/ABBAAE.h"

namespace ABBAA {

std::string run() {
  std::string out("ABBAA");
  out += std::string(SEPARATOR);
  out += ABBAAA::run();
  out += std::string(SEPARATOR);
  out += ABBAAB::run();
  out += std::string(SEPARATOR);
  out += ABBAAC::run();
  out += std::string(SEPARATOR);
  out += ABBAAD::run();
  out += std::string(SEPARATOR);
  out += ABBAAE::run();
  return out;
}

}