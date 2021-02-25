#include "ACCEA.h"
#include "A/ACCEAA.h"
#include "B/ACCEAB.h"
#include "C/ACCEAC.h"
#include "D/ACCEAD.h"
#include "E/ACCEAE.h"

namespace ACCEA {

std::string run() {
  std::string out("ACCEA");
  out += std::string(SEPARATOR);
  out += ACCEAA::run();
  out += std::string(SEPARATOR);
  out += ACCEAB::run();
  out += std::string(SEPARATOR);
  out += ACCEAC::run();
  out += std::string(SEPARATOR);
  out += ACCEAD::run();
  out += std::string(SEPARATOR);
  out += ACCEAE::run();
  return out;
}

}