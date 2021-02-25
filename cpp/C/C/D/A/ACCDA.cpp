#include "ACCDA.h"
#include "A/ACCDAA.h"
#include "B/ACCDAB.h"
#include "C/ACCDAC.h"
#include "D/ACCDAD.h"
#include "E/ACCDAE.h"

namespace ACCDA {

std::string run() {
  std::string out("ACCDA");
  out += std::string(SEPARATOR);
  out += ACCDAA::run();
  out += std::string(SEPARATOR);
  out += ACCDAB::run();
  out += std::string(SEPARATOR);
  out += ACCDAC::run();
  out += std::string(SEPARATOR);
  out += ACCDAD::run();
  out += std::string(SEPARATOR);
  out += ACCDAE::run();
  return out;
}

}