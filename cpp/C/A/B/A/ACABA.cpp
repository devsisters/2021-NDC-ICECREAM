#include "ACABA.h"
#include "A/ACABAA.h"
#include "B/ACABAB.h"
#include "C/ACABAC.h"
#include "D/ACABAD.h"
#include "E/ACABAE.h"

namespace ACABA {

std::string run() {
  std::string out("ACABA");
  out += std::string(SEPARATOR);
  out += ACABAA::run();
  out += std::string(SEPARATOR);
  out += ACABAB::run();
  out += std::string(SEPARATOR);
  out += ACABAC::run();
  out += std::string(SEPARATOR);
  out += ACABAD::run();
  out += std::string(SEPARATOR);
  out += ACABAE::run();
  return out;
}

}