#include "AEDA.h"
#include "A/AEDAA.h"
#include "B/AEDAB.h"
#include "C/AEDAC.h"
#include "D/AEDAD.h"
#include "E/AEDAE.h"

namespace AEDA {

std::string run() {
  std::string out("AEDA");
  out += std::string(SEPARATOR);
  out += AEDAA::run();
  out += std::string(SEPARATOR);
  out += AEDAB::run();
  out += std::string(SEPARATOR);
  out += AEDAC::run();
  out += std::string(SEPARATOR);
  out += AEDAD::run();
  out += std::string(SEPARATOR);
  out += AEDAE::run();
  return out;
}

}