#include "AADAA.h"
#include "A/AADAAA.h"
#include "B/AADAAB.h"
#include "C/AADAAC.h"
#include "D/AADAAD.h"
#include "E/AADAAE.h"

namespace AADAA {

std::string run() {
  std::string out("AADAA");
  out += std::string(SEPARATOR);
  out += AADAAA::run();
  out += std::string(SEPARATOR);
  out += AADAAB::run();
  out += std::string(SEPARATOR);
  out += AADAAC::run();
  out += std::string(SEPARATOR);
  out += AADAAD::run();
  out += std::string(SEPARATOR);
  out += AADAAE::run();
  return out;
}

}