#include "AAECA.h"
#include "A/AAECAA.h"
#include "B/AAECAB.h"
#include "C/AAECAC.h"
#include "D/AAECAD.h"
#include "E/AAECAE.h"

namespace AAECA {

std::string run() {
  std::string out("AAECA");
  out += std::string(SEPARATOR);
  out += AAECAA::run();
  out += std::string(SEPARATOR);
  out += AAECAB::run();
  out += std::string(SEPARATOR);
  out += AAECAC::run();
  out += std::string(SEPARATOR);
  out += AAECAD::run();
  out += std::string(SEPARATOR);
  out += AAECAE::run();
  return out;
}

}