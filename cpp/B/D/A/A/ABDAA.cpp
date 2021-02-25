#include "ABDAA.h"
#include "A/ABDAAA.h"
#include "B/ABDAAB.h"
#include "C/ABDAAC.h"
#include "D/ABDAAD.h"
#include "E/ABDAAE.h"

namespace ABDAA {

std::string run() {
  std::string out("ABDAA");
  out += std::string(SEPARATOR);
  out += ABDAAA::run();
  out += std::string(SEPARATOR);
  out += ABDAAB::run();
  out += std::string(SEPARATOR);
  out += ABDAAC::run();
  out += std::string(SEPARATOR);
  out += ABDAAD::run();
  out += std::string(SEPARATOR);
  out += ABDAAE::run();
  return out;
}

}