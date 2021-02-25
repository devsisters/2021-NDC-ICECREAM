#include "ADA.h"
#include "A/ADAA.h"
#include "B/ADAB.h"
#include "C/ADAC.h"
#include "D/ADAD.h"
#include "E/ADAE.h"

namespace ADA {

std::string run() {
  std::string out("ADA");
  out += std::string(SEPARATOR);
  out += ADAA::run();
  out += std::string(SEPARATOR);
  out += ADAB::run();
  out += std::string(SEPARATOR);
  out += ADAC::run();
  out += std::string(SEPARATOR);
  out += ADAD::run();
  out += std::string(SEPARATOR);
  out += ADAE::run();
  return out;
}

}