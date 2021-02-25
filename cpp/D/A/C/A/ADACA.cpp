#include "ADACA.h"
#include "A/ADACAA.h"
#include "B/ADACAB.h"
#include "C/ADACAC.h"
#include "D/ADACAD.h"
#include "E/ADACAE.h"

namespace ADACA {

std::string run() {
  std::string out("ADACA");
  out += std::string(SEPARATOR);
  out += ADACAA::run();
  out += std::string(SEPARATOR);
  out += ADACAB::run();
  out += std::string(SEPARATOR);
  out += ADACAC::run();
  out += std::string(SEPARATOR);
  out += ADACAD::run();
  out += std::string(SEPARATOR);
  out += ADACAE::run();
  return out;
}

}