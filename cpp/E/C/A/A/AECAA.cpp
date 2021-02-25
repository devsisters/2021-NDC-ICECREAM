#include "AECAA.h"
#include "A/AECAAA.h"
#include "B/AECAAB.h"
#include "C/AECAAC.h"
#include "D/AECAAD.h"
#include "E/AECAAE.h"

namespace AECAA {

std::string run() {
  std::string out("AECAA");
  out += std::string(SEPARATOR);
  out += AECAAA::run();
  out += std::string(SEPARATOR);
  out += AECAAB::run();
  out += std::string(SEPARATOR);
  out += AECAAC::run();
  out += std::string(SEPARATOR);
  out += AECAAD::run();
  out += std::string(SEPARATOR);
  out += AECAAE::run();
  return out;
}

}