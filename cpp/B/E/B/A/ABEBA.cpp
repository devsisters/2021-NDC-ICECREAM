#include "ABEBA.h"
#include "A/ABEBAA.h"
#include "B/ABEBAB.h"
#include "C/ABEBAC.h"
#include "D/ABEBAD.h"
#include "E/ABEBAE.h"

namespace ABEBA {

std::string run() {
  std::string out("ABEBA");
  out += std::string(SEPARATOR);
  out += ABEBAA::run();
  out += std::string(SEPARATOR);
  out += ABEBAB::run();
  out += std::string(SEPARATOR);
  out += ABEBAC::run();
  out += std::string(SEPARATOR);
  out += ABEBAD::run();
  out += std::string(SEPARATOR);
  out += ABEBAE::run();
  return out;
}

}