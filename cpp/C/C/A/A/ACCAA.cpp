#include "ACCAA.h"
#include "A/ACCAAA.h"
#include "B/ACCAAB.h"
#include "C/ACCAAC.h"
#include "D/ACCAAD.h"
#include "E/ACCAAE.h"

namespace ACCAA {

std::string run() {
  std::string out("ACCAA");
  out += std::string(SEPARATOR);
  out += ACCAAA::run();
  out += std::string(SEPARATOR);
  out += ACCAAB::run();
  out += std::string(SEPARATOR);
  out += ACCAAC::run();
  out += std::string(SEPARATOR);
  out += ACCAAD::run();
  out += std::string(SEPARATOR);
  out += ACCAAE::run();
  return out;
}

}