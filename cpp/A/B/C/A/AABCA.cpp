#include "AABCA.h"
#include "A/AABCAA.h"
#include "B/AABCAB.h"
#include "C/AABCAC.h"
#include "D/AABCAD.h"
#include "E/AABCAE.h"

namespace AABCA {

std::string run() {
  std::string out("AABCA");
  out += std::string(SEPARATOR);
  out += AABCAA::run();
  out += std::string(SEPARATOR);
  out += AABCAB::run();
  out += std::string(SEPARATOR);
  out += AABCAC::run();
  out += std::string(SEPARATOR);
  out += AABCAD::run();
  out += std::string(SEPARATOR);
  out += AABCAE::run();
  return out;
}

}