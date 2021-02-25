#include "ABEA.h"
#include "A/ABEAA.h"
#include "B/ABEAB.h"
#include "C/ABEAC.h"
#include "D/ABEAD.h"
#include "E/ABEAE.h"

namespace ABEA {

std::string run() {
  std::string out("ABEA");
  out += std::string(SEPARATOR);
  out += ABEAA::run();
  out += std::string(SEPARATOR);
  out += ABEAB::run();
  out += std::string(SEPARATOR);
  out += ABEAC::run();
  out += std::string(SEPARATOR);
  out += ABEAD::run();
  out += std::string(SEPARATOR);
  out += ABEAE::run();
  return out;
}

}