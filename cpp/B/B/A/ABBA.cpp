#include "ABBA.h"
#include "A/ABBAA.h"
#include "B/ABBAB.h"
#include "C/ABBAC.h"
#include "D/ABBAD.h"
#include "E/ABBAE.h"

namespace ABBA {

std::string run() {
  std::string out("ABBA");
  out += std::string(SEPARATOR);
  out += ABBAA::run();
  out += std::string(SEPARATOR);
  out += ABBAB::run();
  out += std::string(SEPARATOR);
  out += ABBAC::run();
  out += std::string(SEPARATOR);
  out += ABBAD::run();
  out += std::string(SEPARATOR);
  out += ABBAE::run();
  return out;
}

}