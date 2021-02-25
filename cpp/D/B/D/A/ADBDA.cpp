#include "ADBDA.h"
#include "A/ADBDAA.h"
#include "B/ADBDAB.h"
#include "C/ADBDAC.h"
#include "D/ADBDAD.h"
#include "E/ADBDAE.h"

namespace ADBDA {

std::string run() {
  std::string out("ADBDA");
  out += std::string(SEPARATOR);
  out += ADBDAA::run();
  out += std::string(SEPARATOR);
  out += ADBDAB::run();
  out += std::string(SEPARATOR);
  out += ADBDAC::run();
  out += std::string(SEPARATOR);
  out += ADBDAD::run();
  out += std::string(SEPARATOR);
  out += ADBDAE::run();
  return out;
}

}