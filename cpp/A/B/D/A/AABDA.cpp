#include "AABDA.h"
#include "A/AABDAA.h"
#include "B/AABDAB.h"
#include "C/AABDAC.h"
#include "D/AABDAD.h"
#include "E/AABDAE.h"

namespace AABDA {

std::string run() {
  std::string out("AABDA");
  out += std::string(SEPARATOR);
  out += AABDAA::run();
  out += std::string(SEPARATOR);
  out += AABDAB::run();
  out += std::string(SEPARATOR);
  out += AABDAC::run();
  out += std::string(SEPARATOR);
  out += AABDAD::run();
  out += std::string(SEPARATOR);
  out += AABDAE::run();
  return out;
}

}