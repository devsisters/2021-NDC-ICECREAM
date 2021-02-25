#include "AACA.h"
#include "A/AACAA.h"
#include "B/AACAB.h"
#include "C/AACAC.h"
#include "D/AACAD.h"
#include "E/AACAE.h"

namespace AACA {

std::string run() {
  std::string out("AACA");
  out += std::string(SEPARATOR);
  out += AACAA::run();
  out += std::string(SEPARATOR);
  out += AACAB::run();
  out += std::string(SEPARATOR);
  out += AACAC::run();
  out += std::string(SEPARATOR);
  out += AACAD::run();
  out += std::string(SEPARATOR);
  out += AACAE::run();
  return out;
}

}