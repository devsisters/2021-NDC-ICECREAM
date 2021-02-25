#include "ACEDA.h"
#include "A/ACEDAA.h"
#include "B/ACEDAB.h"
#include "C/ACEDAC.h"
#include "D/ACEDAD.h"
#include "E/ACEDAE.h"

namespace ACEDA {

std::string run() {
  std::string out("ACEDA");
  out += std::string(SEPARATOR);
  out += ACEDAA::run();
  out += std::string(SEPARATOR);
  out += ACEDAB::run();
  out += std::string(SEPARATOR);
  out += ACEDAC::run();
  out += std::string(SEPARATOR);
  out += ACEDAD::run();
  out += std::string(SEPARATOR);
  out += ACEDAE::run();
  return out;
}

}