#include "AAACA.h"
#include "A/AAACAA.h"
#include "B/AAACAB.h"
#include "C/AAACAC.h"
#include "D/AAACAD.h"
#include "E/AAACAE.h"

namespace AAACA {

std::string run() {
  std::string out("AAACA");
  out += std::string(SEPARATOR);
  out += AAACAA::run();
  out += std::string(SEPARATOR);
  out += AAACAB::run();
  out += std::string(SEPARATOR);
  out += AAACAC::run();
  out += std::string(SEPARATOR);
  out += AAACAD::run();
  out += std::string(SEPARATOR);
  out += AAACAE::run();
  return out;
}

}