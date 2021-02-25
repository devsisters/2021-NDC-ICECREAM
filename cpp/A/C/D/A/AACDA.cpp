#include "AACDA.h"
#include "A/AACDAA.h"
#include "B/AACDAB.h"
#include "C/AACDAC.h"
#include "D/AACDAD.h"
#include "E/AACDAE.h"

namespace AACDA {

std::string run() {
  std::string out("AACDA");
  out += std::string(SEPARATOR);
  out += AACDAA::run();
  out += std::string(SEPARATOR);
  out += AACDAB::run();
  out += std::string(SEPARATOR);
  out += AACDAC::run();
  out += std::string(SEPARATOR);
  out += AACDAD::run();
  out += std::string(SEPARATOR);
  out += AACDAE::run();
  return out;
}

}