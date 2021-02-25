#include "AECA.h"
#include "A/AECAA.h"
#include "B/AECAB.h"
#include "C/AECAC.h"
#include "D/AECAD.h"
#include "E/AECAE.h"

namespace AECA {

std::string run() {
  std::string out("AECA");
  out += std::string(SEPARATOR);
  out += AECAA::run();
  out += std::string(SEPARATOR);
  out += AECAB::run();
  out += std::string(SEPARATOR);
  out += AECAC::run();
  out += std::string(SEPARATOR);
  out += AECAD::run();
  out += std::string(SEPARATOR);
  out += AECAE::run();
  return out;
}

}