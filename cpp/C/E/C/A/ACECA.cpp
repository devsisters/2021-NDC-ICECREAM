#include "ACECA.h"
#include "A/ACECAA.h"
#include "B/ACECAB.h"
#include "C/ACECAC.h"
#include "D/ACECAD.h"
#include "E/ACECAE.h"

namespace ACECA {

std::string run() {
  std::string out("ACECA");
  out += std::string(SEPARATOR);
  out += ACECAA::run();
  out += std::string(SEPARATOR);
  out += ACECAB::run();
  out += std::string(SEPARATOR);
  out += ACECAC::run();
  out += std::string(SEPARATOR);
  out += ACECAD::run();
  out += std::string(SEPARATOR);
  out += ACECAE::run();
  return out;
}

}