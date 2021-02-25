#include "ACEEA.h"
#include "A/ACEEAA.h"
#include "B/ACEEAB.h"
#include "C/ACEEAC.h"
#include "D/ACEEAD.h"
#include "E/ACEEAE.h"

namespace ACEEA {

std::string run() {
  std::string out("ACEEA");
  out += std::string(SEPARATOR);
  out += ACEEAA::run();
  out += std::string(SEPARATOR);
  out += ACEEAB::run();
  out += std::string(SEPARATOR);
  out += ACEEAC::run();
  out += std::string(SEPARATOR);
  out += ACEEAD::run();
  out += std::string(SEPARATOR);
  out += ACEEAE::run();
  return out;
}

}