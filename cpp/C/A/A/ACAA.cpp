#include "ACAA.h"
#include "A/ACAAA.h"
#include "B/ACAAB.h"
#include "C/ACAAC.h"
#include "D/ACAAD.h"
#include "E/ACAAE.h"

namespace ACAA {

std::string run() {
  std::string out("ACAA");
  out += std::string(SEPARATOR);
  out += ACAAA::run();
  out += std::string(SEPARATOR);
  out += ACAAB::run();
  out += std::string(SEPARATOR);
  out += ACAAC::run();
  out += std::string(SEPARATOR);
  out += ACAAD::run();
  out += std::string(SEPARATOR);
  out += ACAAE::run();
  return out;
}

}