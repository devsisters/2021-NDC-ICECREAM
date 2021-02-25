#include "AEEBA.h"
#include "A/AEEBAA.h"
#include "B/AEEBAB.h"
#include "C/AEEBAC.h"
#include "D/AEEBAD.h"
#include "E/AEEBAE.h"

namespace AEEBA {

std::string run() {
  std::string out("AEEBA");
  out += std::string(SEPARATOR);
  out += AEEBAA::run();
  out += std::string(SEPARATOR);
  out += AEEBAB::run();
  out += std::string(SEPARATOR);
  out += AEEBAC::run();
  out += std::string(SEPARATOR);
  out += AEEBAD::run();
  out += std::string(SEPARATOR);
  out += AEEBAE::run();
  return out;
}

}