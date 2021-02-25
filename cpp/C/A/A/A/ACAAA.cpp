#include "ACAAA.h"
#include "A/ACAAAA.h"
#include "B/ACAAAB.h"
#include "C/ACAAAC.h"
#include "D/ACAAAD.h"
#include "E/ACAAAE.h"

namespace ACAAA {

std::string run() {
  std::string out("ACAAA");
  out += std::string(SEPARATOR);
  out += ACAAAA::run();
  out += std::string(SEPARATOR);
  out += ACAAAB::run();
  out += std::string(SEPARATOR);
  out += ACAAAC::run();
  out += std::string(SEPARATOR);
  out += ACAAAD::run();
  out += std::string(SEPARATOR);
  out += ACAAAE::run();
  return out;
}

}