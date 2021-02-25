#include "AEDDA.h"
#include "A/AEDDAA.h"
#include "B/AEDDAB.h"
#include "C/AEDDAC.h"
#include "D/AEDDAD.h"
#include "E/AEDDAE.h"

namespace AEDDA {

std::string run() {
  std::string out("AEDDA");
  out += std::string(SEPARATOR);
  out += AEDDAA::run();
  out += std::string(SEPARATOR);
  out += AEDDAB::run();
  out += std::string(SEPARATOR);
  out += AEDDAC::run();
  out += std::string(SEPARATOR);
  out += AEDDAD::run();
  out += std::string(SEPARATOR);
  out += AEDDAE::run();
  return out;
}

}