#include "ACDDA.h"
#include "A/ACDDAA.h"
#include "B/ACDDAB.h"
#include "C/ACDDAC.h"
#include "D/ACDDAD.h"
#include "E/ACDDAE.h"

namespace ACDDA {

std::string run() {
  std::string out("ACDDA");
  out += std::string(SEPARATOR);
  out += ACDDAA::run();
  out += std::string(SEPARATOR);
  out += ACDDAB::run();
  out += std::string(SEPARATOR);
  out += ACDDAC::run();
  out += std::string(SEPARATOR);
  out += ACDDAD::run();
  out += std::string(SEPARATOR);
  out += ACDDAE::run();
  return out;
}

}