#include "AACAA.h"
#include "A/AACAAA.h"
#include "B/AACAAB.h"
#include "C/AACAAC.h"
#include "D/AACAAD.h"
#include "E/AACAAE.h"

namespace AACAA {

std::string run() {
  std::string out("AACAA");
  out += std::string(SEPARATOR);
  out += AACAAA::run();
  out += std::string(SEPARATOR);
  out += AACAAB::run();
  out += std::string(SEPARATOR);
  out += AACAAC::run();
  out += std::string(SEPARATOR);
  out += AACAAD::run();
  out += std::string(SEPARATOR);
  out += AACAAE::run();
  return out;
}

}