#include "AEECA.h"
#include "A/AEECAA.h"
#include "B/AEECAB.h"
#include "C/AEECAC.h"
#include "D/AEECAD.h"
#include "E/AEECAE.h"

namespace AEECA {

std::string run() {
  std::string out("AEECA");
  out += std::string(SEPARATOR);
  out += AEECAA::run();
  out += std::string(SEPARATOR);
  out += AEECAB::run();
  out += std::string(SEPARATOR);
  out += AEECAC::run();
  out += std::string(SEPARATOR);
  out += AEECAD::run();
  out += std::string(SEPARATOR);
  out += AEECAE::run();
  return out;
}

}