#include "ABACA.h"
#include "A/ABACAA.h"
#include "B/ABACAB.h"
#include "C/ABACAC.h"
#include "D/ABACAD.h"
#include "E/ABACAE.h"

namespace ABACA {

std::string run() {
  std::string out("ABACA");
  out += std::string(SEPARATOR);
  out += ABACAA::run();
  out += std::string(SEPARATOR);
  out += ABACAB::run();
  out += std::string(SEPARATOR);
  out += ABACAC::run();
  out += std::string(SEPARATOR);
  out += ABACAD::run();
  out += std::string(SEPARATOR);
  out += ABACAE::run();
  return out;
}

}