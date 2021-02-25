#include "ACEAA.h"
#include "A/ACEAAA.h"
#include "B/ACEAAB.h"
#include "C/ACEAAC.h"
#include "D/ACEAAD.h"
#include "E/ACEAAE.h"

namespace ACEAA {

std::string run() {
  std::string out("ACEAA");
  out += std::string(SEPARATOR);
  out += ACEAAA::run();
  out += std::string(SEPARATOR);
  out += ACEAAB::run();
  out += std::string(SEPARATOR);
  out += ACEAAC::run();
  out += std::string(SEPARATOR);
  out += ACEAAD::run();
  out += std::string(SEPARATOR);
  out += ACEAAE::run();
  return out;
}

}