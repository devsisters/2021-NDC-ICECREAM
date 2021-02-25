#include "ABECA.h"
#include "A/ABECAA.h"
#include "B/ABECAB.h"
#include "C/ABECAC.h"
#include "D/ABECAD.h"
#include "E/ABECAE.h"

namespace ABECA {

std::string run() {
  std::string out("ABECA");
  out += std::string(SEPARATOR);
  out += ABECAA::run();
  out += std::string(SEPARATOR);
  out += ABECAB::run();
  out += std::string(SEPARATOR);
  out += ABECAC::run();
  out += std::string(SEPARATOR);
  out += ABECAD::run();
  out += std::string(SEPARATOR);
  out += ABECAE::run();
  return out;
}

}