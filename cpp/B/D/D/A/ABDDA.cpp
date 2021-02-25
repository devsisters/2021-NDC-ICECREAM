#include "ABDDA.h"
#include "A/ABDDAA.h"
#include "B/ABDDAB.h"
#include "C/ABDDAC.h"
#include "D/ABDDAD.h"
#include "E/ABDDAE.h"

namespace ABDDA {

std::string run() {
  std::string out("ABDDA");
  out += std::string(SEPARATOR);
  out += ABDDAA::run();
  out += std::string(SEPARATOR);
  out += ABDDAB::run();
  out += std::string(SEPARATOR);
  out += ABDDAC::run();
  out += std::string(SEPARATOR);
  out += ABDDAD::run();
  out += std::string(SEPARATOR);
  out += ABDDAE::run();
  return out;
}

}