#include "ABCDA.h"
#include "A/ABCDAA.h"
#include "B/ABCDAB.h"
#include "C/ABCDAC.h"
#include "D/ABCDAD.h"
#include "E/ABCDAE.h"

namespace ABCDA {

std::string run() {
  std::string out("ABCDA");
  out += std::string(SEPARATOR);
  out += ABCDAA::run();
  out += std::string(SEPARATOR);
  out += ABCDAB::run();
  out += std::string(SEPARATOR);
  out += ABCDAC::run();
  out += std::string(SEPARATOR);
  out += ABCDAD::run();
  out += std::string(SEPARATOR);
  out += ABCDAE::run();
  return out;
}

}