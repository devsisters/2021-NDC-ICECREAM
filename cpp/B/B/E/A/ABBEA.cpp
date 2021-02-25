#include "ABBEA.h"
#include "A/ABBEAA.h"
#include "B/ABBEAB.h"
#include "C/ABBEAC.h"
#include "D/ABBEAD.h"
#include "E/ABBEAE.h"

namespace ABBEA {

std::string run() {
  std::string out("ABBEA");
  out += std::string(SEPARATOR);
  out += ABBEAA::run();
  out += std::string(SEPARATOR);
  out += ABBEAB::run();
  out += std::string(SEPARATOR);
  out += ABBEAC::run();
  out += std::string(SEPARATOR);
  out += ABBEAD::run();
  out += std::string(SEPARATOR);
  out += ABBEAE::run();
  return out;
}

}