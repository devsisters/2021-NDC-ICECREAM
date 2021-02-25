#include "ABEAA.h"
#include "A/ABEAAA.h"
#include "B/ABEAAB.h"
#include "C/ABEAAC.h"
#include "D/ABEAAD.h"
#include "E/ABEAAE.h"

namespace ABEAA {

std::string run() {
  std::string out("ABEAA");
  out += std::string(SEPARATOR);
  out += ABEAAA::run();
  out += std::string(SEPARATOR);
  out += ABEAAB::run();
  out += std::string(SEPARATOR);
  out += ABEAAC::run();
  out += std::string(SEPARATOR);
  out += ABEAAD::run();
  out += std::string(SEPARATOR);
  out += ABEAAE::run();
  return out;
}

}